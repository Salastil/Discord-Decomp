package oh;

import androidx.work.CoroutineWorker;
import com.facebook.react.bridge.queue.MessageQueueThreadImpl;
import com.facebook.react.common.futures.SimpleSettableFuture;
import com.google.android.material.button.MaterialButton;
import com.google.android.material.carousel.CarouselLayoutManager;
import com.google.android.material.textfield.TextInputLayout;
import com.swmansion.worklets.AndroidUIScheduler;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class w implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15967d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f15968e;

    public /* synthetic */ w(int i5, Object obj) {
        this.f15967d = i5;
        this.f15968e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f15967d) {
            case 0:
                ((TextInputLayout) this.f15968e).f6138w.requestLayout();
                return;
            case 1:
                AndroidUIScheduler androidUIScheduler = (AndroidUIScheduler) this.f15968e;
                synchronized (androidUIScheduler.f6814b) {
                    try {
                        if (androidUIScheduler.f6814b.get()) {
                            androidUIScheduler.triggerUI();
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return;
            case 2:
                ((rj.b) this.f15968e).j();
                return;
            case 3:
                MaterialButton.a((MaterialButton) this.f15968e);
                return;
            case 4:
                ((u1.d) this.f15968e).f().e(new o1.o("Failed to launch the selector UI. Hint: ensure the `context` parameter is an Activity-based context."));
                return;
            case 5:
                ((ud.e) this.f15968e).u();
                return;
            case 6:
                CoroutineWorker this$0 = (CoroutineWorker) this.f15968e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                if (this$0.f2562x.f9110d instanceof g4.a) {
                    this$0.f2561w.f(null);
                    return;
                }
                return;
            case 7:
                ((CarouselLayoutManager) this.f15968e).requestLayout();
                return;
            default:
                MessageQueueThreadImpl.Companion.startNewBackgroundThread$lambda$0((SimpleSettableFuture) this.f15968e);
                return;
        }
    }
}
