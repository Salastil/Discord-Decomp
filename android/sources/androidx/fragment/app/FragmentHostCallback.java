package androidx.fragment.app;

import android.os.Handler;
import android.view.LayoutInflater;
import android.view.View;
import java.io.PrintWriter;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class FragmentHostCallback extends FragmentContainer {

    /* renamed from: d, reason: collision with root package name */
    public final FragmentActivity f1910d;

    /* renamed from: e, reason: collision with root package name */
    public final FragmentActivity f1911e;

    /* renamed from: i, reason: collision with root package name */
    public final Handler f1912i;

    /* renamed from: v, reason: collision with root package name */
    public final d1 f1913v;

    public FragmentHostCallback(FragmentActivity context) {
        Intrinsics.checkNotNullParameter(context, "activity");
        Handler handler = new Handler();
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f1910d = context;
        this.f1911e = context;
        this.f1912i = handler;
        this.f1913v = new d1();
    }

    @Override // androidx.fragment.app.FragmentContainer
    public View b(int i5) {
        return null;
    }

    @Override // androidx.fragment.app.FragmentContainer
    public boolean c() {
        return true;
    }

    public void d(PrintWriter writer, String[] strArr) {
        Intrinsics.checkNotNullParameter("  ", "prefix");
        Intrinsics.checkNotNullParameter(writer, "writer");
    }

    public abstract FragmentActivity e();

    public LayoutInflater f() {
        LayoutInflater from = LayoutInflater.from(this.f1911e);
        Intrinsics.checkNotNullExpressionValue(from, "from(context)");
        return from;
    }

    public boolean g(String permission) {
        Intrinsics.checkNotNullParameter(permission, "permission");
        return false;
    }

    public void h() {
    }
}
