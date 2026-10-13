package oh;

import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import android.view.MotionEvent;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.widget.AutoCompleteTextView;
import android.widget.EditText;
import android.widget.Spinner;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.discord.R;
import com.google.android.material.textfield.TextInputLayout;
import io.sentry.android.core.h1;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class k extends o {

    /* renamed from: e, reason: collision with root package name */
    public final int f15901e;

    /* renamed from: f, reason: collision with root package name */
    public final int f15902f;

    /* renamed from: g, reason: collision with root package name */
    public final TimeInterpolator f15903g;

    /* renamed from: h, reason: collision with root package name */
    public AutoCompleteTextView f15904h;

    /* renamed from: i, reason: collision with root package name */
    public final com.discord.chat.presentation.list.delegate.b f15905i;
    public final com.discord.chat.input.views.b j;
    public final j k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f15906l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f15907m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f15908n;

    /* renamed from: o, reason: collision with root package name */
    public long f15909o;

    /* renamed from: p, reason: collision with root package name */
    public AccessibilityManager f15910p;

    /* renamed from: q, reason: collision with root package name */
    public ValueAnimator f15911q;

    /* renamed from: r, reason: collision with root package name */
    public ValueAnimator f15912r;

    /* JADX WARN: Type inference failed for: r0v2, types: [oh.j] */
    public k(n nVar) {
        super(nVar);
        this.f15905i = new com.discord.chat.presentation.list.delegate.b(12, this);
        this.j = new com.discord.chat.input.views.b(3, this);
        this.k = new AccessibilityManager.TouchExplorationStateChangeListener() { // from class: oh.j
            @Override // android.view.accessibility.AccessibilityManager.TouchExplorationStateChangeListener
            public final void onTouchExplorationStateChanged(boolean z5) {
                k kVar = k.this;
                AutoCompleteTextView autoCompleteTextView = kVar.f15904h;
                if (autoCompleteTextView == null || autoCompleteTextView.getInputType() != 0) {
                    return;
                }
                kVar.f15923d.setImportantForAccessibility(z5 ? 2 : 1);
            }
        };
        this.f15909o = LongCompanionObject.MAX_VALUE;
        this.f15902f = ta.a.G(nVar.getContext(), R.attr.motionDurationShort3, 67);
        this.f15901e = ta.a.G(nVar.getContext(), R.attr.motionDurationShort3, 50);
        this.f15903g = ta.a.H(nVar.getContext(), R.attr.motionEasingLinearInterpolator, mg.a.a);
    }

    @Override // oh.o
    public final void a() {
        if (this.f15910p.isTouchExplorationEnabled() && this.f15904h.getInputType() != 0 && !this.f15923d.hasFocus()) {
            this.f15904h.dismissDropDown();
        }
        this.f15904h.post(new h1(29, this));
    }

    @Override // oh.o
    public final int c() {
        return R.string.exposed_dropdown_menu_content_description;
    }

    @Override // oh.o
    public final int d() {
        return R.drawable.mtrl_dropdown_arrow;
    }

    @Override // oh.o
    public final View.OnFocusChangeListener e() {
        return this.j;
    }

    @Override // oh.o
    public final View.OnClickListener f() {
        return this.f15905i;
    }

    @Override // oh.o
    public final AccessibilityManager.TouchExplorationStateChangeListener h() {
        return this.k;
    }

    @Override // oh.o
    public final boolean i(int i5) {
        return i5 != 0;
    }

    @Override // oh.o
    public final boolean k() {
        return this.f15908n;
    }

    @Override // oh.o
    public final void l(EditText editText) {
        if (!(editText instanceof AutoCompleteTextView)) {
            throw new RuntimeException("EditText needs to be an AutoCompleteTextView if an Exposed Dropdown Menu is being used.");
        }
        AutoCompleteTextView autoCompleteTextView = (AutoCompleteTextView) editText;
        this.f15904h = autoCompleteTextView;
        autoCompleteTextView.setOnTouchListener(new View.OnTouchListener() { // from class: oh.h
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 1) {
                    long uptimeMillis = SystemClock.uptimeMillis();
                    k kVar = k.this;
                    long j = uptimeMillis - kVar.f15909o;
                    if (j < 0 || j > 300) {
                        kVar.f15907m = false;
                    }
                    kVar.t();
                    kVar.f15907m = true;
                    kVar.f15909o = SystemClock.uptimeMillis();
                }
                return false;
            }
        });
        this.f15904h.setOnDismissListener(new AutoCompleteTextView.OnDismissListener() { // from class: oh.i
            @Override // android.widget.AutoCompleteTextView.OnDismissListener
            public final void onDismiss() {
                k kVar = k.this;
                kVar.f15907m = true;
                kVar.f15909o = SystemClock.uptimeMillis();
                kVar.s(false);
            }
        });
        this.f15904h.setThreshold(0);
        TextInputLayout textInputLayout = this.a;
        textInputLayout.setErrorIconDrawable((Drawable) null);
        if (editText.getInputType() == 0 && this.f15910p.isTouchExplorationEnabled()) {
            this.f15923d.setImportantForAccessibility(2);
        }
        textInputLayout.setEndIconVisible(true);
    }

    @Override // oh.o
    public final void m(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        if (this.f15904h.getInputType() == 0) {
            accessibilityNodeInfoCompat.o(Spinner.class.getName());
        }
        if (accessibilityNodeInfoCompat.k()) {
            accessibilityNodeInfoCompat.u(null);
        }
    }

    @Override // oh.o
    public final void n(AccessibilityEvent accessibilityEvent) {
        if (this.f15910p.isEnabled() && this.f15904h.getInputType() == 0) {
            boolean z5 = (accessibilityEvent.getEventType() == 32768 || accessibilityEvent.getEventType() == 8) && this.f15908n && !this.f15904h.isPopupShowing();
            if (accessibilityEvent.getEventType() == 1 || z5) {
                t();
                this.f15907m = true;
                this.f15909o = SystemClock.uptimeMillis();
            }
        }
    }

    @Override // oh.o
    public final void q() {
        ValueAnimator ofFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        TimeInterpolator timeInterpolator = this.f15903g;
        ofFloat.setInterpolator(timeInterpolator);
        ofFloat.setDuration(this.f15902f);
        int i5 = 8;
        ofFloat.addUpdateListener(new am.c(i5, this));
        this.f15912r = ofFloat;
        ValueAnimator ofFloat2 = ValueAnimator.ofFloat(1.0f, 0.0f);
        ofFloat2.setInterpolator(timeInterpolator);
        ofFloat2.setDuration(this.f15901e);
        ofFloat2.addUpdateListener(new am.c(i5, this));
        this.f15911q = ofFloat2;
        ofFloat2.addListener(new androidx.appcompat.widget.c(7, this));
        this.f15910p = (AccessibilityManager) this.f15922c.getSystemService("accessibility");
    }

    @Override // oh.o
    public final void r() {
        AutoCompleteTextView autoCompleteTextView = this.f15904h;
        if (autoCompleteTextView != null) {
            autoCompleteTextView.setOnTouchListener(null);
            this.f15904h.setOnDismissListener(null);
        }
    }

    public final void s(boolean z5) {
        if (this.f15908n != z5) {
            this.f15908n = z5;
            this.f15912r.cancel();
            this.f15911q.start();
        }
    }

    public final void t() {
        if (this.f15904h == null) {
            return;
        }
        long uptimeMillis = SystemClock.uptimeMillis() - this.f15909o;
        if (uptimeMillis < 0 || uptimeMillis > 300) {
            this.f15907m = false;
        }
        if (this.f15907m) {
            this.f15907m = false;
            return;
        }
        s(!this.f15908n);
        if (!this.f15908n) {
            this.f15904h.dismissDropDown();
        } else {
            this.f15904h.requestFocus();
            this.f15904h.showDropDown();
        }
    }
}
