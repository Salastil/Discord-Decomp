package a5;

import androidx.appcompat.widget.ActionBarContextView;
import androidx.core.view.b1;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.MessageDigest;

/* loaded from: classes.dex */
public final class f implements b1 {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public int f153b;

    /* renamed from: c, reason: collision with root package name */
    public Object f154c;

    public f(MessageDigest messageDigest, int i5) {
        ByteBuffer.allocate(8).order(ByteOrder.LITTLE_ENDIAN);
        this.f154c = messageDigest;
        this.f153b = i5;
    }

    @Override // androidx.core.view.b1
    public void a() {
        this.a = true;
    }

    @Override // androidx.core.view.b1
    public void b() {
        super/*android.view.View*/.setVisibility(0);
        this.a = false;
    }

    @Override // androidx.core.view.b1
    public void onAnimationEnd() {
        if (this.a) {
            return;
        }
        ActionBarContextView actionBarContextView = (ActionBarContextView) this.f154c;
        actionBarContextView.f834x = null;
        super/*android.view.View*/.setVisibility(this.f153b);
    }

    public f(yq.c0 c0Var, int i5, boolean z5) {
        this.f154c = c0Var;
        this.f153b = i5;
        this.a = z5;
    }
}
