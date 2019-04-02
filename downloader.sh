echo "<<< DEVSIGN 2019 C 과제 다운로더 >>>"
wget https://habitat.factoryal.com/devsign/2019-C/updater.sh
echo "** 업데이터 실행 중..."
.\updater.sh
echo "** 업데이터 정리 중..."
rm updater.sh
echo "다운로더가 곧 종료됩니다..."
sleep 3s