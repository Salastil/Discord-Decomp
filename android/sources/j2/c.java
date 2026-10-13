package j2;

import android.animation.ValueAnimator;
import android.os.Build;
import android.os.Looper;
import android.view.Choreographer;
import androidx.collection.SimpleArrayMap;
import androidx.dynamicanimation.animation.SpringAnimation;
import io.sentry.android.core.h1;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class c {

    /* renamed from: i, reason: collision with root package name */
    public static final ThreadLocal f12385i = new ThreadLocal();

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f12389e;

    /* renamed from: h, reason: collision with root package name */
    public b f12392h;
    public final SimpleArrayMap a = new SimpleArrayMap(0);

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f12386b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final u4.c f12387c = new u4.c(this);

    /* renamed from: d, reason: collision with root package name */
    public final h1 f12388d = new h1(10, this);

    /* renamed from: f, reason: collision with root package name */
    public boolean f12390f = false;

    /* renamed from: g, reason: collision with root package name */
    public float f12391g = 1.0f;

    public c(io.sentry.internal.debugmeta.c cVar) {
        this.f12389e = cVar;
    }

    /* JADX WARN: Type inference failed for: r2v3, types: [android.animation.ValueAnimator$DurationScaleChangeListener, j2.a] */
    public final void a(SpringAnimation springAnimation) {
        ArrayList arrayList = this.f12386b;
        if (arrayList.size() == 0) {
            ((Choreographer) this.f12389e.f11622e).postFrameCallback(new com.facebook.react.modules.core.b(2, this.f12388d));
            if (Build.VERSION.SDK_INT >= 33) {
                this.f12391g = ValueAnimator.getDurationScale();
                if (this.f12392h == null) {
                    this.f12392h = new b(this);
                }
                final b bVar = this.f12392h;
                if (bVar.a == null) {
                    ?? r22 = new ValueAnimator.DurationScaleChangeListener() { // from class: j2.a
                        @Override // android.animation.ValueAnimator.DurationScaleChangeListener
                        public final void onChanged(float f2) {
                            b.this.f12384b.f12391g = f2;
                        }
                    };
                    bVar.a = r22;
                    ValueAnimator.registerDurationScaleChangeListener(r22);
                }
            }
        }
        if (arrayList.contains(springAnimation)) {
            return;
        }
        arrayList.add(springAnimation);
    }

    public final boolean b() {
        io.sentry.internal.debugmeta.c cVar = this.f12389e;
        cVar.getClass();
        return Thread.currentThread() == ((Looper) cVar.f11623i).getThread();
    }
}
