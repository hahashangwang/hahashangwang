public float timer = 2.0f; // 定时2秒
void Update() 
{
      timer -= Time.deltaTime;
      if (timer <= 0) {
          doSomething();
          timer = 2.0f;
      }
}
