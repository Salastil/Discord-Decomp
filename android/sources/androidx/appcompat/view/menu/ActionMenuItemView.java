package androidx.appcompat.view.menu;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.appcompat.widget.k;
import androidx.appcompat.widget.o;
import h.a;
import n.b;
import n.i;
import n.j;
import n.l;
import n.w;

/* loaded from: classes.dex */
public class ActionMenuItemView extends AppCompatTextView implements w, View.OnClickListener, o {
    public boolean E;
    public final int F;
    public int G;
    public final int H;

    /* renamed from: d, reason: collision with root package name */
    public l f806d;

    /* renamed from: e, reason: collision with root package name */
    public CharSequence f807e;

    /* renamed from: i, reason: collision with root package name */
    public Drawable f808i;

    /* renamed from: v, reason: collision with root package name */
    public i f809v;

    /* renamed from: w, reason: collision with root package name */
    public k f810w;

    /* renamed from: x, reason: collision with root package name */
    public b f811x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f812y;

    public ActionMenuItemView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        Resources resources = context.getResources();
        this.f812y = d();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, a.f9447c, 0, 0);
        this.F = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        obtainStyledAttributes.recycle();
        this.H = (int) ((resources.getDisplayMetrics().density * 32.0f) + 0.5f);
        setOnClickListener(this);
        this.G = -1;
        setSaveEnabled(false);
    }

    @Override // n.w
    public final void a(l lVar) {
        this.f806d = lVar;
        setIcon(lVar.getIcon());
        setTitle(lVar.getTitleCondensed());
        setId(lVar.a);
        setVisibility(lVar.isVisible() ? 0 : 8);
        setEnabled(lVar.isEnabled());
        if (lVar.hasSubMenu() && this.f810w == null) {
            this.f810w = new k(this);
        }
    }

    @Override // androidx.appcompat.widget.o
    public final boolean b() {
        return !TextUtils.isEmpty(getText());
    }

    @Override // androidx.appcompat.widget.o
    public final boolean c() {
        return !TextUtils.isEmpty(getText()) && this.f806d.getIcon() == null;
    }

    public final boolean d() {
        Configuration configuration = getContext().getResources().getConfiguration();
        int i5 = configuration.screenWidthDp;
        int i6 = configuration.screenHeightDp;
        if (i5 < 480) {
            return (i5 >= 640 && i6 >= 480) || configuration.orientation == 2;
        }
        return true;
    }

    public final void e() {
        boolean z5 = true;
        boolean z6 = !TextUtils.isEmpty(this.f807e);
        if (this.f808i != null && ((this.f806d.f14692y & 4) != 4 || (!this.f812y && !this.E))) {
            z5 = false;
        }
        boolean z7 = z6 & z5;
        setText(z7 ? this.f807e : null);
        CharSequence charSequence = this.f806d.f14684q;
        if (TextUtils.isEmpty(charSequence)) {
            setContentDescription(z7 ? null : this.f806d.f14674e);
        } else {
            setContentDescription(charSequence);
        }
        CharSequence charSequence2 = this.f806d.f14685r;
        if (TextUtils.isEmpty(charSequence2)) {
            nt.a.I(this, z7 ? null : this.f806d.f14674e);
        } else {
            nt.a.I(this, charSequence2);
        }
    }

    @Override // android.widget.TextView, android.view.View
    public CharSequence getAccessibilityClassName() {
        return Button.class.getName();
    }

    @Override // n.w
    public l getItemData() {
        return this.f806d;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        i iVar = this.f809v;
        if (iVar != null) {
            iVar.c(this.f806d);
        }
    }

    @Override // android.widget.TextView, android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.f812y = d();
        e();
    }

    @Override // androidx.appcompat.widget.AppCompatTextView, android.widget.TextView, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        boolean isEmpty = TextUtils.isEmpty(getText());
        if (!isEmpty && (i10 = this.G) >= 0) {
            super.setPadding(i10, getPaddingTop(), getPaddingRight(), getPaddingBottom());
        }
        super.onMeasure(i5, i6);
        int mode = View.MeasureSpec.getMode(i5);
        int size = View.MeasureSpec.getSize(i5);
        int measuredWidth = getMeasuredWidth();
        int i11 = this.F;
        int min = mode == Integer.MIN_VALUE ? Math.min(size, i11) : i11;
        if (mode != 1073741824 && i11 > 0 && measuredWidth < min) {
            super.onMeasure(View.MeasureSpec.makeMeasureSpec(min, 1073741824), i6);
        }
        if (!isEmpty || this.f808i == null) {
            return;
        }
        super.setPadding((getMeasuredWidth() - this.f808i.getBounds().width()) / 2, getPaddingTop(), getPaddingRight(), getPaddingBottom());
    }

    @Override // android.widget.TextView, android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        super.onRestoreInstanceState(null);
    }

    @Override // android.widget.TextView, android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        k kVar;
        if (this.f806d.hasSubMenu() && (kVar = this.f810w) != null && kVar.onTouch(this, motionEvent)) {
            return true;
        }
        return super.onTouchEvent(motionEvent);
    }

    public void setCheckable(boolean z5) {
    }

    public void setChecked(boolean z5) {
    }

    public void setExpandedFormat(boolean z5) {
        if (this.E != z5) {
            this.E = z5;
            l lVar = this.f806d;
            if (lVar != null) {
                j jVar = lVar.f14681n;
                jVar.k = true;
                jVar.p(true);
            }
        }
    }

    public void setIcon(Drawable drawable) {
        this.f808i = drawable;
        if (drawable != null) {
            int intrinsicWidth = drawable.getIntrinsicWidth();
            int intrinsicHeight = drawable.getIntrinsicHeight();
            int i5 = this.H;
            if (intrinsicWidth > i5) {
                intrinsicHeight = (int) (intrinsicHeight * (i5 / intrinsicWidth));
                intrinsicWidth = i5;
            }
            if (intrinsicHeight > i5) {
                intrinsicWidth = (int) (intrinsicWidth * (i5 / intrinsicHeight));
            } else {
                i5 = intrinsicHeight;
            }
            drawable.setBounds(0, 0, intrinsicWidth, i5);
        }
        setCompoundDrawables(drawable, null, null, null);
        e();
    }

    public void setItemInvoker(i iVar) {
        this.f809v = iVar;
    }

    @Override // android.widget.TextView, android.view.View
    public final void setPadding(int i5, int i6, int i10, int i11) {
        this.G = i5;
        super.setPadding(i5, i6, i10, i11);
    }

    public void setPopupCallback(b bVar) {
        this.f811x = bVar;
    }

    public void setTitle(CharSequence charSequence) {
        this.f807e = charSequence;
        e();
    }
}
