package com.google.android.material.progressindicator;

import a1.n;
import android.content.Context;
import android.content.res.Resources;
import android.util.AttributeSet;
import androidx.annotation.NonNull;
import com.discord.R;
import gh.d;
import gh.e;
import gh.h;
import gh.j;
import gh.k;
import gh.m;
import gh.s;
import gh.t;
import n3.p;

/* loaded from: classes3.dex */
public class CircularProgressIndicator extends d {
    public CircularProgressIndicator(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        k kVar = this.f9247d;
        e eVar = new e(kVar);
        Context context2 = getContext();
        s jVar = kVar.f9299o == 1 ? new j(context2, kVar) : new h(kVar);
        t tVar = new t(context2, kVar);
        tVar.K = eVar;
        tVar.L = jVar;
        jVar.a = tVar;
        Resources resources = context2.getResources();
        p pVar = new p();
        ThreadLocal threadLocal = n.a;
        pVar.f14790d = resources.getDrawable(R.drawable.ic_mtrl_arrow_circle, null);
        tVar.M = pVar;
        setIndeterminateDrawable(tVar);
        setProgressDrawable(new m(getContext(), kVar, eVar));
        this.F = true;
    }

    public int getIndeterminateAnimationType() {
        return this.f9247d.f9299o;
    }

    public int getIndicatorDirection() {
        return this.f9247d.f9302r;
    }

    public int getIndicatorInset() {
        return this.f9247d.f9301q;
    }

    public int getIndicatorSize() {
        return this.f9247d.f9300p;
    }

    public void setIndeterminateAnimationType(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9299o == i5) {
            return;
        }
        if (b() && isIndeterminate()) {
            throw new IllegalStateException("Cannot change indeterminate animation type while the progress indicator is show in indeterminate mode.");
        }
        kVar.f9299o = i5;
        kVar.b();
        s jVar = i5 == 1 ? new j(getContext(), kVar) : new h(kVar);
        t indeterminateDrawable = getIndeterminateDrawable();
        indeterminateDrawable.L = jVar;
        jVar.a = indeterminateDrawable;
        if (getProgressDrawable() != null && getIndeterminateDrawable() != null) {
            getIndeterminateDrawable().L.l(this.I);
        }
        invalidate();
    }

    public void setIndicatorDirection(int i5) {
        this.f9247d.f9302r = i5;
        invalidate();
    }

    public void setIndicatorInset(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9301q != i5) {
            kVar.f9301q = i5;
            invalidate();
        }
    }

    public void setIndicatorSize(int i5) {
        int max = Math.max(i5, getTrackThickness() * 2);
        k kVar = this.f9247d;
        if (kVar.f9300p != max) {
            kVar.f9300p = max;
            kVar.b();
            requestLayout();
            invalidate();
        }
    }

    @Override // gh.d
    public void setTrackThickness(int i5) {
        super.setTrackThickness(i5);
        this.f9247d.b();
    }
}
