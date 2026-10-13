package com.facebook.hermes.intl;

import android.icu.text.RuleBasedCollator;
import gk.i;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import qd.f;
import y9.a0;
import y9.b;
import y9.b0;
import y9.c;
import y9.d;
import y9.d0;
import y9.z;
import ya.a;

@a
/* loaded from: classes3.dex */
public class Collator {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final c f4517b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f4518c;

    /* renamed from: d, reason: collision with root package name */
    public final String f4519d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f4520e;

    /* renamed from: f, reason: collision with root package name */
    public final b f4521f;

    /* renamed from: g, reason: collision with root package name */
    public final b0 f4522g;

    /* renamed from: h, reason: collision with root package name */
    public final b0 f4523h;

    /* renamed from: i, reason: collision with root package name */
    public final f f4524i;

    @a
    public Collator(List<String> list, Map<String, Object> map) {
        this.f4519d = "default";
        f fVar = new f(12);
        fVar.f16831e = null;
        this.f4524i = fVar;
        this.a = (d) y9.a.l(d.class, (String) y9.a.d(map, "usage", 2, y9.a.f20684d, "sort"));
        HashMap hashMap = new HashMap();
        hashMap.put("localeMatcher", y9.a.d(map, "localeMatcher", 2, y9.a.a, "best fit"));
        a0 a0Var = y9.a.f20685e;
        Object d6 = y9.a.d(map, "numeric", 1, a0Var, a0Var);
        hashMap.put("kn", d6 instanceof a0 ? d6 : String.valueOf(((Boolean) d6).booleanValue()));
        hashMap.put("kf", y9.a.d(map, "caseFirst", 2, y9.a.f20683c, a0Var));
        HashMap k = y9.a.k(list, hashMap, Arrays.asList("co", "kf", "kn"));
        b0 b0Var = (b0) k.get("locale");
        this.f4522g = b0Var;
        this.f4523h = b0Var.a();
        Object c6 = y9.a.c(k, "co");
        this.f4519d = (String) (c6 instanceof z ? "default" : c6);
        Object c8 = y9.a.c(k, "kn");
        if (c8 instanceof z) {
            this.f4520e = false;
        } else {
            this.f4520e = Boolean.parseBoolean((String) c8);
        }
        String c10 = y9.a.c(k, "kf");
        this.f4521f = (b) y9.a.l(b.class, (String) (c10 instanceof z ? "false" : c10));
        if (this.a == d.f20701e) {
            b0 b0Var2 = this.f4522g;
            b0Var2.b();
            i iVar = d0.a;
            String str = iVar.containsKey("collation") ? (String) iVar.get("collation") : "collation";
            ArrayList arrayList = new ArrayList();
            String keywordValue = b0Var2.a.getKeywordValue(str);
            if (keywordValue != null && !keywordValue.isEmpty()) {
                Collections.addAll(arrayList, keywordValue.split("-|_"));
            }
            ArrayList arrayList2 = new ArrayList();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                arrayList2.add(d0.b((String) it.next()));
            }
            arrayList2.add(d0.b("search"));
            this.f4522g.e("co", arrayList2);
        }
        Object d7 = y9.a.d(map, "sensitivity", 2, y9.a.f20682b, a0Var);
        if (!(d7 instanceof a0)) {
            this.f4517b = (c) y9.a.l(c.class, (String) d7);
        } else if (this.a == d.f20700d) {
            this.f4517b = c.f20693v;
        } else {
            this.f4517b = c.f20694w;
        }
        this.f4518c = ((Boolean) y9.a.d(map, "ignorePunctuation", 1, a0Var, Boolean.FALSE)).booleanValue();
        f fVar2 = this.f4524i;
        b0 b0Var3 = this.f4522g;
        b0Var3.b();
        RuleBasedCollator ruleBasedCollator = (RuleBasedCollator) android.icu.text.Collator.getInstance(b0Var3.a);
        fVar2.f16831e = ruleBasedCollator;
        ruleBasedCollator.setDecomposition(17);
        if (this.f4520e) {
            ((RuleBasedCollator) fVar2.f16831e).setNumericCollation(true);
        }
        int ordinal = this.f4521f.ordinal();
        if (ordinal == 0) {
            ((RuleBasedCollator) fVar2.f16831e).setUpperCaseFirst(true);
        } else if (ordinal != 1) {
            ((RuleBasedCollator) fVar2.f16831e).setCaseFirstDefault();
        } else {
            ((RuleBasedCollator) fVar2.f16831e).setLowerCaseFirst(true);
        }
        int ordinal2 = this.f4517b.ordinal();
        if (ordinal2 == 0) {
            ((RuleBasedCollator) fVar2.f16831e).setStrength(0);
        } else if (ordinal2 == 1) {
            ((RuleBasedCollator) fVar2.f16831e).setStrength(1);
        } else if (ordinal2 == 2) {
            ((RuleBasedCollator) fVar2.f16831e).setStrength(0);
            ((RuleBasedCollator) fVar2.f16831e).setCaseLevel(true);
        } else if (ordinal2 == 3) {
            ((RuleBasedCollator) fVar2.f16831e).setStrength(2);
        }
        if (this.f4518c) {
            ((RuleBasedCollator) fVar2.f16831e).setAlternateHandlingShifted(true);
        }
    }

    @a
    public static List<String> supportedLocalesOf(List<String> list, Map<String, Object> map) {
        return ((String) y9.a.d(map, "localeMatcher", 2, y9.a.a, "best fit")).equals("best fit") ? Arrays.asList(y9.a.f((String[]) list.toArray(new String[list.size()]))) : Arrays.asList(y9.a.j((String[]) list.toArray(new String[list.size()])));
    }

    @a
    public double compare(String str, String str2) {
        return ((RuleBasedCollator) this.f4524i.f16831e).compare(str, str2);
    }

    @a
    public Map<String, Object> resolvedOptions() {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("locale", this.f4523h.f().replace("-kn-true", "-kn"));
        linkedHashMap.put("usage", this.a.toString());
        c cVar = this.f4517b;
        c cVar2 = c.f20694w;
        if (cVar == cVar2) {
            f fVar = this.f4524i;
            RuleBasedCollator ruleBasedCollator = (RuleBasedCollator) fVar.f16831e;
            if (ruleBasedCollator != null) {
                int strength = ruleBasedCollator.getStrength();
                cVar2 = strength == 0 ? ((RuleBasedCollator) fVar.f16831e).isCaseLevel() ? c.f20692i : c.f20690d : strength == 1 ? c.f20691e : c.f20693v;
            }
            linkedHashMap.put("sensitivity", cVar2.toString());
        } else {
            linkedHashMap.put("sensitivity", cVar.toString());
        }
        linkedHashMap.put("ignorePunctuation", Boolean.valueOf(this.f4518c));
        linkedHashMap.put("collation", this.f4519d);
        linkedHashMap.put("numeric", Boolean.valueOf(this.f4520e));
        linkedHashMap.put("caseFirst", this.f4521f.toString());
        return linkedHashMap;
    }
}
