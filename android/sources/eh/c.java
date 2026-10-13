package eh;

import android.view.View;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.p3;
import java.util.Objects;

/* loaded from: classes3.dex */
public class c {
    public OnBackInvokedCallback a;

    public OnBackInvokedCallback a(b bVar) {
        Objects.requireNonNull(bVar);
        return new p3(2, bVar);
    }

    public void b(@NonNull b bVar, @NonNull View view, boolean z5) {
        OnBackInvokedDispatcher findOnBackInvokedDispatcher;
        if (this.a == null && (findOnBackInvokedDispatcher = view.findOnBackInvokedDispatcher()) != null) {
            OnBackInvokedCallback a = a(bVar);
            this.a = a;
            findOnBackInvokedDispatcher.registerOnBackInvokedCallback(z5 ? 1000000 : 0, a);
        }
    }

    public void c(@NonNull View view) {
        OnBackInvokedDispatcher findOnBackInvokedDispatcher;
        if (this.a == null || (findOnBackInvokedDispatcher = view.findOnBackInvokedDispatcher()) == null) {
            return;
        }
        findOnBackInvokedDispatcher.unregisterOnBackInvokedCallback(this.a);
        this.a = null;
    }
}
