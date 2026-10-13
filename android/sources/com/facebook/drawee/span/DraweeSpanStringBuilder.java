package com.facebook.drawee.span;

import android.graphics.drawable.Drawable;
import android.text.SpannableStringBuilder;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.view.DraweeHolder;
import f9.c;
import g9.d;
import java.util.HashSet;
import java.util.Iterator;
import k9.a;
import k9.b;
import s4.h;

/* loaded from: classes3.dex */
public final class DraweeSpanStringBuilder extends SpannableStringBuilder {

    /* renamed from: d, reason: collision with root package name */
    public final HashSet f4498d;

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f4499e;

    /* renamed from: i, reason: collision with root package name */
    public final b f4500i;

    /* renamed from: v, reason: collision with root package name */
    public SimpleDraweeSpanTextView f4501v;

    public DraweeSpanStringBuilder() {
        this.f4498d = new HashSet();
        this.f4499e = new HashSet();
        this.f4500i = new b(0, this);
    }

    public final void a(SimpleDraweeSpanTextView simpleDraweeSpanTextView) {
        if (this.f4501v != null) {
            this.f4501v = null;
        }
        this.f4501v = simpleDraweeSpanTextView;
        Iterator it = this.f4498d.iterator();
        while (it.hasNext()) {
            DraweeHolder draweeHolder = ((a) it.next()).E;
            draweeHolder.f4507f.a(c.L);
            draweeHolder.f4503b = true;
            draweeHolder.b();
        }
        Iterator it2 = this.f4499e.iterator();
        if (it2.hasNext()) {
            throw h.b(it2);
        }
    }

    public final void b(SimpleDraweeSpanTextView simpleDraweeSpanTextView) {
        if (simpleDraweeSpanTextView == this.f4501v) {
            this.f4501v = null;
        }
        Iterator it = this.f4498d.iterator();
        while (it.hasNext()) {
            DraweeHolder draweeHolder = ((a) it.next()).E;
            draweeHolder.f4507f.a(c.M);
            draweeHolder.f4503b = false;
            draweeHolder.b();
        }
        Iterator it2 = this.f4499e.iterator();
        while (it2.hasNext()) {
            if (it2.next() != null) {
                throw new ClassCastException();
            }
        }
    }

    public final void c(GenericDraweeHierarchy genericDraweeHierarchy, g9.c cVar, int i5, int i6, int i10, int i11) {
        DraweeHolder draweeHolder = new DraweeHolder(genericDraweeHierarchy);
        draweeHolder.f(cVar);
        if (i5 >= length()) {
            return;
        }
        Drawable c6 = draweeHolder.c();
        if (c6 != null) {
            if (c6.getBounds().isEmpty()) {
                c6.setBounds(0, 0, i6, i10);
            }
            c6.setCallback(this.f4500i);
        }
        a aVar = new a(draweeHolder, i11);
        DraweeController draweeController = draweeHolder.f4506e;
        if (draweeController instanceof g9.c) {
            ((g9.c) draweeController).a(new d(this, aVar, i10));
        }
        this.f4498d.add(aVar);
        setSpan(aVar, i5, i5 + 1, 33);
    }

    public DraweeSpanStringBuilder(CharSequence charSequence) {
        super(charSequence);
        this.f4498d = new HashSet();
        this.f4499e = new HashSet();
        this.f4500i = new b(0, this);
    }
}
