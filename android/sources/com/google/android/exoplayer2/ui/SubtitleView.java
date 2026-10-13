package com.google.android.exoplayer2.ui;

import android.content.Context;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.Spanned;
import android.util.AttributeSet;
import android.view.View;
import android.view.accessibility.CaptioningManager;
import android.widget.FrameLayout;
import he.c;
import he.d;
import he.p;
import he.w;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.d0;
import wd.a;
import wd.b;

@Deprecated
/* loaded from: classes3.dex */
public final class SubtitleView extends FrameLayout {
    public p E;
    public View F;

    /* renamed from: d, reason: collision with root package name */
    public List f5549d;

    /* renamed from: e, reason: collision with root package name */
    public d f5550e;

    /* renamed from: i, reason: collision with root package name */
    public float f5551i;

    /* renamed from: v, reason: collision with root package name */
    public float f5552v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f5553w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f5554x;

    /* renamed from: y, reason: collision with root package name */
    public int f5555y;

    public SubtitleView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f5549d = Collections.EMPTY_LIST;
        this.f5550e = d.f9967g;
        this.f5551i = 0.0533f;
        this.f5552v = 0.08f;
        this.f5553w = true;
        this.f5554x = true;
        c cVar = new c(context, 0);
        this.E = cVar;
        this.F = cVar;
        addView(cVar);
        this.f5555y = 1;
    }

    private List<b> getCuesWithStylingPreferencesApplied() {
        if (this.f5553w && this.f5554x) {
            return this.f5549d;
        }
        ArrayList arrayList = new ArrayList(this.f5549d.size());
        for (int i5 = 0; i5 < this.f5549d.size(); i5++) {
            a a = ((b) this.f5549d.get(i5)).a();
            if (!this.f5553w) {
                a.f19792n = false;
                CharSequence charSequence = a.a;
                if (charSequence instanceof Spanned) {
                    if (!(charSequence instanceof Spannable)) {
                        a.a = SpannableString.valueOf(charSequence);
                    }
                    CharSequence charSequence2 = a.a;
                    charSequence2.getClass();
                    Spannable spannable = (Spannable) charSequence2;
                    for (Object obj : spannable.getSpans(0, spannable.length(), Object.class)) {
                        if (!(obj instanceof ae.b)) {
                            spannable.removeSpan(obj);
                        }
                    }
                }
                jb.a.E(a);
            } else if (!this.f5554x) {
                jb.a.E(a);
            }
            arrayList.add(a.a());
        }
        return arrayList;
    }

    private float getUserCaptionFontScale() {
        CaptioningManager captioningManager;
        if (d0.a < 19 || isInEditMode() || (captioningManager = (CaptioningManager) getContext().getSystemService("captioning")) == null || !captioningManager.isEnabled()) {
            return 1.0f;
        }
        return captioningManager.getFontScale();
    }

    private d getUserCaptionStyle() {
        CaptioningManager captioningManager;
        int i5 = d0.a;
        d dVar = d.f9967g;
        if (i5 < 19 || isInEditMode() || (captioningManager = (CaptioningManager) getContext().getSystemService("captioning")) == null || !captioningManager.isEnabled()) {
            return dVar;
        }
        CaptioningManager.CaptionStyle userStyle = captioningManager.getUserStyle();
        if (i5 >= 21) {
            return new d(userStyle.hasForegroundColor() ? userStyle.foregroundColor : -1, userStyle.hasBackgroundColor() ? userStyle.backgroundColor : -16777216, userStyle.hasWindowColor() ? userStyle.windowColor : 0, userStyle.hasEdgeType() ? userStyle.edgeType : 0, userStyle.hasEdgeColor() ? userStyle.edgeColor : -1, userStyle.getTypeface());
        }
        return new d(userStyle.foregroundColor, userStyle.backgroundColor, 0, userStyle.edgeType, userStyle.edgeColor, userStyle.getTypeface());
    }

    private <T extends View & p> void setView(T t5) {
        removeView(this.F);
        View view = this.F;
        if (view instanceof w) {
            ((w) view).f10013e.destroy();
        }
        this.F = t5;
        this.E = t5;
        addView(t5);
    }

    public final void a() {
        setStyle(getUserCaptionStyle());
    }

    public final void b() {
        setFractionalTextSize(getUserCaptionFontScale() * 0.0533f);
    }

    public final void c() {
        this.E.a(getCuesWithStylingPreferencesApplied(), this.f5550e, this.f5551i, this.f5552v);
    }

    public void setApplyEmbeddedFontSizes(boolean z5) {
        this.f5554x = z5;
        c();
    }

    public void setApplyEmbeddedStyles(boolean z5) {
        this.f5553w = z5;
        c();
    }

    public void setBottomPaddingFraction(float f2) {
        this.f5552v = f2;
        c();
    }

    public void setCues(List<b> list) {
        if (list == null) {
            list = Collections.EMPTY_LIST;
        }
        this.f5549d = list;
        c();
    }

    public void setFractionalTextSize(float f2) {
        this.f5551i = f2;
        c();
    }

    public void setStyle(d dVar) {
        this.f5550e = dVar;
        c();
    }

    public void setViewType(int i5) {
        if (this.f5555y == i5) {
            return;
        }
        if (i5 == 1) {
            setView(new c(getContext(), 0));
        } else {
            if (i5 != 2) {
                throw new IllegalArgumentException();
            }
            setView(new w(getContext()));
        }
        this.f5555y = i5;
    }
}
