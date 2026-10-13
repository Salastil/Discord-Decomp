package oh;

import android.content.Context;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.widget.EditText;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public abstract class o {
    public final TextInputLayout a;

    /* renamed from: b, reason: collision with root package name */
    public final n f15921b;

    /* renamed from: c, reason: collision with root package name */
    public final Context f15922c;

    /* renamed from: d, reason: collision with root package name */
    public final CheckableImageButton f15923d;

    public o(n nVar) {
        this.a = nVar.f15914d;
        this.f15921b = nVar;
        this.f15922c = nVar.getContext();
        this.f15923d = nVar.f15920y;
    }

    public int c() {
        return 0;
    }

    public int d() {
        return 0;
    }

    public View.OnFocusChangeListener e() {
        return null;
    }

    public View.OnClickListener f() {
        return null;
    }

    public View.OnFocusChangeListener g() {
        return null;
    }

    public AccessibilityManager.TouchExplorationStateChangeListener h() {
        return null;
    }

    public boolean i(int i5) {
        return true;
    }

    public boolean j() {
        return this instanceof k;
    }

    public boolean k() {
        return false;
    }

    public final void p() {
        this.f15921b.f(false);
    }

    public void a() {
    }

    public void b() {
    }

    public void q() {
    }

    public void r() {
    }

    public void l(EditText editText) {
    }

    public void m(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
    }

    public void n(AccessibilityEvent accessibilityEvent) {
    }

    public void o(boolean z5) {
    }
}
