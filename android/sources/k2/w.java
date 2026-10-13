package k2;

import android.text.Editable;
import android.text.SpannableStringBuilder;
import java.lang.reflect.Array;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class w extends SpannableStringBuilder {

    /* renamed from: d, reason: collision with root package name */
    public final Class f13156d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f13157e;

    public w(Class cls, CharSequence charSequence) {
        super(charSequence);
        this.f13157e = new ArrayList();
        ta.a.k(cls, "watcherClass cannot be null");
        this.f13156d = cls;
    }

    public final void a() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f13157e;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((v) arrayList.get(i5)).f13155e.incrementAndGet();
            i5++;
        }
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Editable append(CharSequence charSequence) {
        super.append(charSequence);
        return this;
    }

    public final void b() {
        e();
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f13157e;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((v) arrayList.get(i5)).onTextChanged(this, 0, length(), length());
            i5++;
        }
    }

    public final v c(Object obj) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f13157e;
            if (i5 >= arrayList.size()) {
                return null;
            }
            v vVar = (v) arrayList.get(i5);
            if (vVar.f13154d == obj) {
                return vVar;
            }
            i5++;
        }
    }

    public final boolean d(Object obj) {
        if (obj != null) {
            return this.f13156d == obj.getClass();
        }
        return false;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final Editable delete(int i5, int i6) {
        super.delete(i5, i6);
        return this;
    }

    public final void e() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f13157e;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((v) arrayList.get(i5)).f13155e.decrementAndGet();
            i5++;
        }
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spanned
    public final int getSpanEnd(Object obj) {
        v c6;
        if (d(obj) && (c6 = c(obj)) != null) {
            obj = c6;
        }
        return super.getSpanEnd(obj);
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spanned
    public final int getSpanFlags(Object obj) {
        v c6;
        if (d(obj) && (c6 = c(obj)) != null) {
            obj = c6;
        }
        return super.getSpanFlags(obj);
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spanned
    public final int getSpanStart(Object obj) {
        v c6;
        if (d(obj) && (c6 = c(obj)) != null) {
            obj = c6;
        }
        return super.getSpanStart(obj);
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spanned
    public final Object[] getSpans(int i5, int i6, Class cls) {
        if (this.f13156d != cls) {
            return super.getSpans(i5, i6, cls);
        }
        v[] vVarArr = (v[]) super.getSpans(i5, i6, v.class);
        Object[] objArr = (Object[]) Array.newInstance((Class<?>) cls, vVarArr.length);
        for (int i10 = 0; i10 < vVarArr.length; i10++) {
            objArr[i10] = vVarArr[i10].f13154d;
        }
        return objArr;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final Editable insert(int i5, CharSequence charSequence) {
        super.insert(i5, charSequence);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spanned
    public final int nextSpanTransition(int i5, int i6, Class cls) {
        if (cls == null || this.f13156d == cls) {
            cls = v.class;
        }
        return super.nextSpanTransition(i5, i6, cls);
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spannable
    public final void removeSpan(Object obj) {
        v vVar;
        if (d(obj)) {
            vVar = c(obj);
            if (vVar != null) {
                obj = vVar;
            }
        } else {
            vVar = null;
        }
        super.removeSpan(obj);
        if (vVar != null) {
            this.f13157e.remove(vVar);
        }
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final /* bridge */ /* synthetic */ Editable replace(int i5, int i6, CharSequence charSequence) {
        replace(i5, i6, charSequence);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Spannable
    public final void setSpan(Object obj, int i5, int i6, int i10) {
        if (d(obj)) {
            v vVar = new v(obj);
            this.f13157e.add(vVar);
            obj = vVar;
        }
        super.setSpan(obj, i5, i6, i10);
    }

    @Override // android.text.SpannableStringBuilder, java.lang.CharSequence
    public final CharSequence subSequence(int i5, int i6) {
        return new w(this.f13156d, this, i5, i6);
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final SpannableStringBuilder append(CharSequence charSequence) {
        super.append(charSequence);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final SpannableStringBuilder delete(int i5, int i6) {
        super.delete(i5, i6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final SpannableStringBuilder insert(int i5, CharSequence charSequence) {
        super.insert(i5, charSequence);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final /* bridge */ /* synthetic */ Editable replace(int i5, int i6, CharSequence charSequence, int i10, int i11) {
        replace(i5, i6, charSequence, i10, i11);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Appendable append(CharSequence charSequence) {
        super.append(charSequence);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final Editable insert(int i5, CharSequence charSequence, int i6, int i10) {
        super.insert(i5, charSequence, i6, i10);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final SpannableStringBuilder replace(int i5, int i6, CharSequence charSequence) {
        a();
        super.replace(i5, i6, charSequence);
        e();
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Editable append(char c6) {
        super.append(c6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final SpannableStringBuilder insert(int i5, CharSequence charSequence, int i6, int i10) {
        super.insert(i5, charSequence, i6, i10);
        return this;
    }

    public w(Class cls, w wVar, int i5, int i6) {
        super(wVar, i5, i6);
        this.f13157e = new ArrayList();
        ta.a.k(cls, "watcherClass cannot be null");
        this.f13156d = cls;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final SpannableStringBuilder append(char c6) {
        super.append(c6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Appendable append(char c6) {
        super.append(c6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable
    public final SpannableStringBuilder replace(int i5, int i6, CharSequence charSequence, int i10, int i11) {
        a();
        super.replace(i5, i6, charSequence, i10, i11);
        e();
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Editable append(CharSequence charSequence, int i5, int i6) {
        super.append(charSequence, i5, i6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final SpannableStringBuilder append(CharSequence charSequence, int i5, int i6) {
        super.append(charSequence, i5, i6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder, android.text.Editable, java.lang.Appendable
    public final Appendable append(CharSequence charSequence, int i5, int i6) {
        super.append(charSequence, i5, i6);
        return this;
    }

    @Override // android.text.SpannableStringBuilder
    public final SpannableStringBuilder append(CharSequence charSequence, Object obj, int i5) {
        super.append(charSequence, obj, i5);
        return this;
    }
}
