package i;

import androidx.activity.ComponentActivity;
import androidx.activity.contextaware.OnContextAvailableListener;
import androidx.appcompat.app.AppCompatDelegate;

/* loaded from: classes.dex */
public final class g implements OnContextAvailableListener {
    public final /* synthetic */ h a;

    public g(h hVar) {
        this.a = hVar;
    }

    @Override // androidx.activity.contextaware.OnContextAvailableListener
    public final void a(ComponentActivity componentActivity) {
        h hVar = this.a;
        AppCompatDelegate delegate = hVar.getDelegate();
        delegate.k();
        hVar.getSavedStateRegistry().a("androidx:appcompat");
        delegate.o();
    }
}
