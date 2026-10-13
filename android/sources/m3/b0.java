package m3;

import android.view.View;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: classes.dex */
public final class b0 {

    /* renamed from: b, reason: collision with root package name */
    public final View f14327b;
    public final HashMap a = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f14328c = new ArrayList();

    public b0(View view) {
        this.f14327b = view;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b0)) {
            return false;
        }
        b0 b0Var = (b0) obj;
        return this.f14327b == b0Var.f14327b && this.a.equals(b0Var.a);
    }

    public final int hashCode() {
        return this.a.hashCode() + (this.f14327b.hashCode() * 31);
    }

    public final String toString() {
        StringBuilder p3 = k0.d.p("TransitionValues@" + Integer.toHexString(hashCode()) + ":\n", "    view = ");
        p3.append(this.f14327b);
        p3.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        String k = k0.d.k(p3.toString(), "    values:");
        HashMap hashMap = this.a;
        for (String str : hashMap.keySet()) {
            k = k + "    " + str + ": " + hashMap.get(str) + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
        }
        return k;
    }
}
