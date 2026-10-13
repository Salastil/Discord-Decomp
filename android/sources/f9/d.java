package f9;

import java.util.concurrent.ArrayBlockingQueue;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: b, reason: collision with root package name */
    public static final d f8484b = new d();

    /* renamed from: c, reason: collision with root package name */
    public static final boolean f8485c = true;
    public final ArrayBlockingQueue a = new ArrayBlockingQueue(20);

    public final void a(c cVar) {
        if (!f8485c) {
            return;
        }
        int i5 = 5;
        while (true) {
            ArrayBlockingQueue arrayBlockingQueue = this.a;
            if (arrayBlockingQueue.offer(cVar) || i5 <= 0) {
                return;
            }
            arrayBlockingQueue.poll();
            i5--;
        }
    }

    public final String toString() {
        return this.a.toString();
    }
}
