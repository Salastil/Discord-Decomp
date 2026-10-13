package nd;

import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.Iterator;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutionException;
import org.webrtc.EglRenderer;
import org.webrtc.VideoFileRenderer;
import org.webrtc.VideoFrame;

/* loaded from: classes3.dex */
public final /* synthetic */ class v implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15184d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f15185e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f15186i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f15187v;

    public /* synthetic */ v(Object obj, Object obj2, Object obj3, int i5) {
        this.f15184d = i5;
        this.f15185e = obj;
        this.f15186i = obj2;
        this.f15187v = obj3;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.Object, nd.x] */
    @Override // java.lang.Runnable
    public final void run() {
        boolean z5;
        switch (this.f15184d) {
            case 0:
                a1.d dVar = (a1.d) this.f15185e;
                this.f15186i.h(dVar.f14e, (s) dVar.f15i, (MediaLoadData) this.f15187v);
                return;
            case 1:
                ((EglRenderer) this.f15185e).lambda$removeFrameListener$2((CountDownLatch) this.f15186i, (EglRenderer.FrameListener) this.f15187v);
                return;
            case 2:
                ((EglRenderer) this.f15185e).lambda$removeRenderListener$3((CountDownLatch) this.f15186i, (EglRenderer.RenderListener) this.f15187v);
                return;
            case 3:
                ((VideoFileRenderer) this.f15185e).lambda$renderFrameOnRenderThread$1((VideoFrame.I420Buffer) this.f15186i, (VideoFrame) this.f15187v);
                return;
            default:
                w3.e eVar = (w3.e) this.f15185e;
                ListenableFuture listenableFuture = (ListenableFuture) this.f15186i;
                w3.r rVar = (w3.r) this.f15187v;
                try {
                    z5 = ((Boolean) listenableFuture.get()).booleanValue();
                } catch (InterruptedException | ExecutionException unused) {
                    z5 = true;
                }
                synchronized (eVar.k) {
                    try {
                        e4.j m5 = ks.n.m(rVar.f19674i);
                        String str = m5.a;
                        if (eVar.c(str) == rVar) {
                            eVar.b(str);
                        }
                        v3.p.d().a(w3.e.f19635l, w3.e.class.getSimpleName() + " " + str + " executed; reschedule = " + z5);
                        Iterator it = eVar.j.iterator();
                        while (it.hasNext()) {
                            ((w3.c) it.next()).e(m5, z5);
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return;
        }
    }
}
