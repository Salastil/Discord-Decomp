package e;

import android.view.View;
import android.view.Window;
import androidx.activity.ComponentActivity;
import androidx.lifecycle.LifecycleOwner;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements androidx.lifecycle.t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7813d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f7814e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f7813d = i5;
        this.f7814e = obj;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner lifecycleOwner, androidx.lifecycle.n event) {
        Window window;
        View peekDecorView;
        int i5 = this.f7813d;
        Object obj = this.f7814e;
        switch (i5) {
            case 0:
                ComponentActivity componentActivity = (ComponentActivity) obj;
                int i6 = ComponentActivity.f733d;
                Intrinsics.checkNotNullParameter(lifecycleOwner, "<anonymous parameter 0>");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event == androidx.lifecycle.n.ON_STOP && (window = componentActivity.getWindow()) != null && (peekDecorView = window.peekDecorView()) != null) {
                    peekDecorView.cancelPendingInputEvents();
                    break;
                }
                break;
            case 1:
                ComponentActivity.b((ComponentActivity) obj, lifecycleOwner, event);
                break;
            default:
                e3.a aVar = (e3.a) obj;
                Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event != androidx.lifecycle.n.ON_START) {
                    if (event == androidx.lifecycle.n.ON_STOP) {
                        aVar.f7935h = false;
                        break;
                    }
                } else {
                    aVar.f7935h = true;
                    break;
                }
                break;
        }
    }
}
