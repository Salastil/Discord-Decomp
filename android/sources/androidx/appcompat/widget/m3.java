package androidx.appcompat.widget;

import androidx.activity.OnBackPressedDispatcher;
import androidx.fragment.app.FragmentActivity;
import java.util.ArrayList;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m3 {
    public boolean a = true;

    /* renamed from: b, reason: collision with root package name */
    public boolean f1036b;

    /* renamed from: c, reason: collision with root package name */
    public Object f1037c;

    /* renamed from: d, reason: collision with root package name */
    public Object f1038d;

    public ps.m a() {
        return new ps.m(this.a, this.f1036b, (String[]) this.f1037c, (String[]) this.f1038d);
    }

    public void b(String... cipherSuites) {
        Intrinsics.checkNotNullParameter(cipherSuites, "cipherSuites");
        if (!this.a) {
            throw new IllegalArgumentException("no cipher suites for cleartext connections");
        }
        if (cipherSuites.length == 0) {
            throw new IllegalArgumentException("At least one cipher suite is required");
        }
        this.f1037c = (String[]) cipherSuites.clone();
    }

    public void c(ps.l... cipherSuites) {
        Intrinsics.checkNotNullParameter(cipherSuites, "cipherSuites");
        if (!this.a) {
            throw new IllegalArgumentException("no cipher suites for cleartext connections");
        }
        ArrayList arrayList = new ArrayList(cipherSuites.length);
        for (ps.l lVar : cipherSuites) {
            arrayList.add(lVar.a);
        }
        Object[] array = arrayList.toArray(new String[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        String[] strArr = (String[]) array;
        b((String[]) Arrays.copyOf(strArr, strArr.length));
    }

    public void d() {
        OnBackPressedDispatcher onBackPressedDispatcher;
        com.swmansion.rnscreens.b0 b0Var = (com.swmansion.rnscreens.b0) this.f1037c;
        if (this.a || !this.f1036b) {
            return;
        }
        FragmentActivity activity = b0Var.getActivity();
        if (activity != null && (onBackPressedDispatcher = activity.getOnBackPressedDispatcher()) != null) {
            onBackPressedDispatcher.a(b0Var, (com.swmansion.rnscreens.a) this.f1038d);
        }
        this.a = true;
    }

    public void e(String... tlsVersions) {
        Intrinsics.checkNotNullParameter(tlsVersions, "tlsVersions");
        if (!this.a) {
            throw new IllegalArgumentException("no TLS versions for cleartext connections");
        }
        if (tlsVersions.length == 0) {
            throw new IllegalArgumentException("At least one TLS version is required");
        }
        this.f1038d = (String[]) tlsVersions.clone();
    }

    public void f(ps.w... tlsVersions) {
        Intrinsics.checkNotNullParameter(tlsVersions, "tlsVersions");
        if (!this.a) {
            throw new IllegalArgumentException("no TLS versions for cleartext connections");
        }
        ArrayList arrayList = new ArrayList(tlsVersions.length);
        for (ps.w wVar : tlsVersions) {
            arrayList.add(wVar.f16608d);
        }
        Object[] array = arrayList.toArray(new String[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        String[] strArr = (String[]) array;
        e((String[]) Arrays.copyOf(strArr, strArr.length));
    }
}
