package i;

import android.app.Activity;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import androidx.appcompat.widget.p3;
import java.util.Objects;

/* loaded from: classes.dex */
public abstract class t {
    public static OnBackInvokedDispatcher a(Activity activity) {
        return activity.getOnBackInvokedDispatcher();
    }

    public static OnBackInvokedCallback b(Object obj, androidx.appcompat.app.a aVar) {
        Objects.requireNonNull(aVar);
        p3 p3Var = new p3(3, aVar);
        hb.a.d(obj).registerOnBackInvokedCallback(1000000, p3Var);
        return p3Var;
    }

    public static void c(Object obj, Object obj2) {
        hb.a.d(obj).unregisterOnBackInvokedCallback((OnBackInvokedCallback) obj2);
    }
}
