package am;

import a5.k0;
import androidx.core.view.WindowInsetsControllerCompat;
import ch.s;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f665d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f666e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f667i;

    public /* synthetic */ a(d dVar, boolean z5) {
        this.f666e = dVar;
        this.f667i = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f665d) {
            case 0:
                boolean z5 = this.f667i;
                d dVar = this.f666e;
                if (!z5) {
                    WindowInsetsControllerCompat a = dVar.a();
                    if (a != null) {
                        a.e(1);
                        break;
                    }
                } else {
                    WindowInsetsControllerCompat a10 = dVar.a();
                    if (a10 != null) {
                        a10.a(1);
                        break;
                    }
                }
                break;
            default:
                this.f666e.getClass();
                WeakReference weakReference = k0.a;
                bm.d dVar2 = weakReference != null ? (bm.d) weakReference.get() : null;
                if (dVar2 != null && dVar2.f3048w) {
                    boolean z6 = dVar2.f3045e;
                    boolean z7 = this.f667i;
                    if (z6 != z7) {
                        dVar2.f3045e = z7;
                        dVar2.f();
                        Intrinsics.checkNotNullParameter(dVar2, "<this>");
                        if (!dVar2.isAttachedToWindow()) {
                            dVar2.addOnAttachStateChangeListener(new s(1));
                            break;
                        } else {
                            dVar2.requestApplyInsets();
                            break;
                        }
                    }
                }
                break;
        }
    }

    public /* synthetic */ a(boolean z5, d dVar) {
        this.f667i = z5;
        this.f666e = dVar;
    }
}
