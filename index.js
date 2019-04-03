var wget = require('node-wget');
var fs = require('fs');

const gitArchiveURL = 'https://github.com/factoryal/Devsign-2019-C/archive/node-pkg.zip';

function main(){
    var newListFile = JSON.parse(fs.readFileSync('list.json'));
    var hwDir = fs.readdirSync('./homework', {withFileTypes: true});
    var currentHwDirList = new Array();
    for(var item in hwDir){
        if(hwDir[item].isDirectory() == true) currentHwDirList.push(hwDir[item].name);
    }
    var newHwDirList = new Array();
    for(var item in newListFile){
        newHwDirList.push(newListFile[item].dirName);
    }
    var requiredHwDirList = new Array();
    requiredHwDirList = newHwDirList.filter(item => !currentHwDirList.includes(item));

    console.log('currentHwDirList : ' + currentHwDirList.toString());
    console.log('newHwDirList : ' + newHwDirList.toString());
    console.log('requiredHwDirList : ' + requiredHwDirList.toString());
    
    // download homework files
    if(fs.existsSync('./.tmp')) fs.rmdirSync('.tmp/');
    fs.mkdirSync('./.tmp');
    // wget({url: gitArchiveURL, dest: '.tmp'});
    wget(gitArchiveURL);
    
    fs.rmdirSync('./.tmp');
}

main();