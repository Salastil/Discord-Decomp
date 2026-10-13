package am;

import ai.k;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.text.SpannableStringBuilder;
import android.util.Base64;
import android.util.Pair;
import androidx.appcompat.widget.b4;
import aq.m;
import aq.n;
import di.p;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import ke.d0;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import ni.q;
import ni.r;
import rd.u;
import th.e1;
import th.g0;
import th.o;
import th.s;
import th.s1;

/* loaded from: classes3.dex */
public final class f implements m, wd.e, ni.c, uh.g {

    /* renamed from: d, reason: collision with root package name */
    public Object f675d;

    /* renamed from: e, reason: collision with root package name */
    public Object f676e;

    /* renamed from: i, reason: collision with root package name */
    public Object f677i;

    /* renamed from: v, reason: collision with root package name */
    public Object f678v;

    /* renamed from: w, reason: collision with root package name */
    public Object f679w;

    public /* synthetic */ f(Object obj, Object obj2, Object obj3, Object obj4, Object obj5) {
        this.f675d = obj;
        this.f676e = obj2;
        this.f677i = obj3;
        this.f678v = obj4;
        this.f679w = obj5;
    }

    @Override // wd.e
    public int A() {
        return ((long[]) this.f676e).length;
    }

    @Override // aq.m
    public n B(hq.e eVar) {
        return ((b4) this.f675d).B(eVar);
    }

    @Override // aq.m
    public void G(hq.e eVar, mq.f value) {
        Intrinsics.checkNotNullParameter(value, "value");
        ((b4) this.f675d).G(eVar, value);
    }

    @Override // aq.m
    public void J(hq.e eVar, hq.b enumClassId, hq.e enumEntryName) {
        Intrinsics.checkNotNullParameter(enumClassId, "enumClassId");
        Intrinsics.checkNotNullParameter(enumEntryName, "enumEntryName");
        ((b4) this.f675d).J(eVar, enumClassId, enumEntryName);
    }

    @Override // uh.g
    public Object a() {
        return new o(((p) ((u) this.f675d).f17275e).f7601d, (s) ((uh.f) this.f676e).a(), (s1) ((uh.f) this.f677i).a(), (g0) ((uh.f) this.f678v).a(), (e1) ((uh.f) this.f679w).a());
    }

    @Override // ni.c
    public Object b(Class cls) {
        if (!((Set) this.f675d).contains(q.a(cls))) {
            throw new k("Attempting to request an undeclared dependency " + cls + ".");
        }
        Object b10 = ((ni.c) this.f679w).b(cls);
        if (!cls.equals(vi.a.class)) {
            return b10;
        }
        return new r();
    }

    @Override // ni.c
    public Object c(q qVar) {
        if (((Set) this.f675d).contains(qVar)) {
            return ((ni.c) this.f679w).c(qVar);
        }
        throw new k("Attempting to request an undeclared dependency " + qVar + ".");
    }

    @Override // wd.e
    public int d(long j) {
        long[] jArr = (long[]) this.f676e;
        int b10 = d0.b(jArr, j, false);
        if (b10 < jArr.length) {
            return b10;
        }
        return -1;
    }

    @Override // ni.c
    public yi.a e(Class cls) {
        return f(q.a(cls));
    }

    @Override // ni.c
    public yi.a f(q qVar) {
        if (((Set) this.f676e).contains(qVar)) {
            return ((ni.c) this.f679w).f(qVar);
        }
        throw new k("Attempting to request an undeclared dependency Provider<" + qVar + ">.");
    }

    @Override // ni.c
    public yi.a g(q qVar) {
        if (((Set) this.f678v).contains(qVar)) {
            return ((ni.c) this.f679w).g(qVar);
        }
        throw new k("Attempting to request an undeclared dependency Provider<Set<" + qVar + ">>.");
    }

    @Override // ni.c
    public Set h(q qVar) {
        if (((Set) this.f677i).contains(qVar)) {
            return ((ni.c) this.f679w).h(qVar);
        }
        throw new k("Attempting to request an undeclared dependency Set<" + qVar + ">.");
    }

    @Override // wd.e
    public long i(int i5) {
        return ((long[]) this.f676e)[i5];
    }

    @Override // aq.m
    public void j() {
        ((b4) this.f676e).j();
        ((b4) this.f677i).f((hq.e) this.f678v, new mq.a((jp.b) CollectionsKt.Z((ArrayList) this.f679w)));
    }

    @Override // aq.m
    public m k(hq.b classId, hq.e eVar) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        return ((b4) this.f675d).k(classId, eVar);
    }

    @Override // wd.e
    public List q(long j) {
        de.e eVar = (de.e) this.f675d;
        Map map = (Map) this.f677i;
        HashMap hashMap = (HashMap) this.f678v;
        HashMap hashMap2 = (HashMap) this.f679w;
        ArrayList arrayList = new ArrayList();
        eVar.g(j, eVar.f7512h, arrayList);
        TreeMap treeMap = new TreeMap();
        eVar.i(j, false, eVar.f7512h, treeMap);
        eVar.h(j, map, hashMap, eVar.f7512h, treeMap);
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            String str = (String) hashMap2.get(pair.second);
            if (str != null) {
                byte[] decode = Base64.decode(str, 0);
                Bitmap decodeByteArray = BitmapFactory.decodeByteArray(decode, 0, decode.length);
                de.f fVar = (de.f) hashMap.get(pair.first);
                fVar.getClass();
                arrayList2.add(new wd.b(null, null, null, decodeByteArray, fVar.f7517c, 0, fVar.f7519e, fVar.f7516b, 0, Integer.MIN_VALUE, -3.4028235E38f, fVar.f7520f, fVar.f7521g, false, -16777216, fVar.j, 0.0f));
            }
        }
        for (Map.Entry entry : treeMap.entrySet()) {
            de.f fVar2 = (de.f) hashMap.get(entry.getKey());
            fVar2.getClass();
            wd.a aVar = (wd.a) entry.getValue();
            CharSequence charSequence = aVar.a;
            charSequence.getClass();
            SpannableStringBuilder spannableStringBuilder = (SpannableStringBuilder) charSequence;
            for (de.a aVar2 : (de.a[]) spannableStringBuilder.getSpans(0, spannableStringBuilder.length(), de.a.class)) {
                spannableStringBuilder.replace(spannableStringBuilder.getSpanStart(aVar2), spannableStringBuilder.getSpanEnd(aVar2), (CharSequence) "");
            }
            for (int i5 = 0; i5 < spannableStringBuilder.length(); i5++) {
                if (spannableStringBuilder.charAt(i5) == ' ') {
                    int i6 = i5 + 1;
                    int i10 = i6;
                    while (i10 < spannableStringBuilder.length() && spannableStringBuilder.charAt(i10) == ' ') {
                        i10++;
                    }
                    int i11 = i10 - i6;
                    if (i11 > 0) {
                        spannableStringBuilder.delete(i5, i11 + i5);
                    }
                }
            }
            if (spannableStringBuilder.length() > 0 && spannableStringBuilder.charAt(0) == ' ') {
                spannableStringBuilder.delete(0, 1);
            }
            for (int i12 = 0; i12 < spannableStringBuilder.length() - 1; i12++) {
                if (spannableStringBuilder.charAt(i12) == '\n') {
                    int i13 = i12 + 1;
                    if (spannableStringBuilder.charAt(i13) == ' ') {
                        spannableStringBuilder.delete(i13, i12 + 2);
                    }
                }
            }
            if (spannableStringBuilder.length() > 0 && spannableStringBuilder.charAt(spannableStringBuilder.length() - 1) == ' ') {
                spannableStringBuilder.delete(spannableStringBuilder.length() - 1, spannableStringBuilder.length());
            }
            for (int i14 = 0; i14 < spannableStringBuilder.length() - 1; i14++) {
                if (spannableStringBuilder.charAt(i14) == ' ') {
                    int i15 = i14 + 1;
                    if (spannableStringBuilder.charAt(i15) == '\n') {
                        spannableStringBuilder.delete(i14, i15);
                    }
                }
            }
            if (spannableStringBuilder.length() > 0 && spannableStringBuilder.charAt(spannableStringBuilder.length() - 1) == '\n') {
                spannableStringBuilder.delete(spannableStringBuilder.length() - 1, spannableStringBuilder.length());
            }
            float f2 = fVar2.f7517c;
            int i16 = fVar2.f7518d;
            aVar.f19785e = f2;
            aVar.f19786f = i16;
            aVar.f19787g = fVar2.f7519e;
            aVar.f19788h = fVar2.f7516b;
            aVar.f19790l = fVar2.f7520f;
            float f10 = fVar2.f7523i;
            int i17 = fVar2.f7522h;
            aVar.k = f10;
            aVar.j = i17;
            aVar.f19794p = fVar2.j;
            arrayList2.add(aVar.a());
        }
        return arrayList2;
    }

    @Override // aq.m
    public void x(hq.e eVar, Object obj) {
        ((b4) this.f675d).x(eVar, obj);
    }

    public f(de.e eVar, HashMap hashMap, HashMap hashMap2, HashMap hashMap3) {
        this.f675d = eVar;
        this.f678v = hashMap2;
        this.f679w = hashMap3;
        this.f677i = Collections.unmodifiableMap(hashMap);
        TreeSet treeSet = new TreeSet();
        int i5 = 0;
        eVar.d(treeSet, false);
        long[] jArr = new long[treeSet.size()];
        Iterator it = treeSet.iterator();
        while (it.hasNext()) {
            jArr[i5] = ((Long) it.next()).longValue();
            i5++;
        }
        this.f676e = jArr;
    }
}
