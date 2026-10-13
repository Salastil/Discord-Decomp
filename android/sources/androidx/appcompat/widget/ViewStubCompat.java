package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.annotation.NonNull;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class ViewStubCompat extends View {

    /* renamed from: d, reason: collision with root package name */
    public int f906d;

    /* renamed from: e, reason: collision with root package name */
    public int f907e;

    /* renamed from: i, reason: collision with root package name */
    public WeakReference f908i;

    /* renamed from: v, reason: collision with root package name */
    public LayoutInflater f909v;

    public ViewStubCompat(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f906d = 0;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.B, 0, 0);
        this.f907e = obtainStyledAttributes.getResourceId(2, -1);
        this.f906d = obtainStyledAttributes.getResourceId(1, 0);
        setId(obtainStyledAttributes.getResourceId(0, -1));
        obtainStyledAttributes.recycle();
        setVisibility(8);
        setWillNotDraw(true);
    }

    public final View a() {
        ViewParent parent = getParent();
        if (!(parent instanceof ViewGroup)) {
            throw new IllegalStateException("ViewStub must have a non-null ViewGroup viewParent");
        }
        if (this.f906d == 0) {
            throw new IllegalArgumentException("ViewStub must have a valid layoutResource");
        }
        ViewGroup viewGroup = (ViewGroup) parent;
        LayoutInflater layoutInflater = this.f909v;
        if (layoutInflater == null) {
            layoutInflater = LayoutInflater.from(getContext());
        }
        View inflate = layoutInflater.inflate(this.f906d, viewGroup, false);
        int i5 = this.f907e;
        if (i5 != -1) {
            inflate.setId(i5);
        }
        int indexOfChild = viewGroup.indexOfChild(this);
        viewGroup.removeViewInLayout(this);
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams != null) {
            viewGroup.addView(inflate, indexOfChild, layoutParams);
        } else {
            viewGroup.addView(inflate, indexOfChild);
        }
        this.f908i = new WeakReference(inflate);
        return inflate;
    }

    @Override // android.view.View
    public final void dispatchDraw(Canvas canvas) {
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
    }

    public int getInflatedId() {
        return this.f907e;
    }

    public LayoutInflater getLayoutInflater() {
        return this.f909v;
    }

    public int getLayoutResource() {
        return this.f906d;
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        setMeasuredDimension(0, 0);
    }

    public void setInflatedId(int i5) {
        this.f907e = i5;
    }

    public void setLayoutInflater(LayoutInflater layoutInflater) {
        this.f909v = layoutInflater;
    }

    public void setLayoutResource(int i5) {
        this.f906d = i5;
    }

    public void setOnInflateListener(d4 d4Var) {
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        WeakReference weakReference = this.f908i;
        if (weakReference != null) {
            View view = (View) weakReference.get();
            if (view == null) {
                throw new IllegalStateException("setVisibility called on un-referenced view");
            }
            view.setVisibility(i5);
            return;
        }
        super.setVisibility(i5);
        if (i5 == 0 || i5 == 4) {
            a();
        }
    }
}
