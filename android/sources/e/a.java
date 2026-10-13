package e;

import androidx.activity.ComponentActivity;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7811d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ComponentActivity f7812e;

    public /* synthetic */ a(ComponentActivity componentActivity, int i5) {
        this.f7811d = i5;
        this.f7812e = componentActivity;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f7811d;
        ComponentActivity componentActivity = this.f7812e;
        switch (i5) {
            case 0:
                int i6 = ComponentActivity.f733d;
                componentActivity.invalidateMenu();
                return;
            default:
                try {
                    super/*android.app.Activity*/.onBackPressed();
                    return;
                } catch (IllegalStateException e9) {
                    if (!Intrinsics.areEqual(e9.getMessage(), "Can not perform this action after onSaveInstanceState")) {
                        throw e9;
                    }
                    return;
                } catch (NullPointerException e10) {
                    if (!Intrinsics.areEqual(e10.getMessage(), "Attempt to invoke virtual method 'android.os.Handler android.app.FragmentHostCallback.getHandler()' on a null object reference")) {
                        throw e10;
                    }
                    return;
                }
        }
    }
}
