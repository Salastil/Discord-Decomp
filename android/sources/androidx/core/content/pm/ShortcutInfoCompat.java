package androidx.core.content.pm;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ShortcutInfo;
import android.os.Build;
import android.os.PersistableBundle;
import android.text.TextUtils;
import androidx.core.app.Person;
import androidx.core.graphics.drawable.IconCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import x0.m;
import y0.e;
import z0.a;

/* loaded from: classes.dex */
public final class ShortcutInfoCompat {
    public Context a;

    /* renamed from: b, reason: collision with root package name */
    public String f1500b;

    /* renamed from: c, reason: collision with root package name */
    public Intent[] f1501c;

    /* renamed from: d, reason: collision with root package name */
    public ComponentName f1502d;

    /* renamed from: e, reason: collision with root package name */
    public CharSequence f1503e;

    /* renamed from: f, reason: collision with root package name */
    public CharSequence f1504f;

    /* renamed from: g, reason: collision with root package name */
    public CharSequence f1505g;

    /* renamed from: h, reason: collision with root package name */
    public IconCompat f1506h;

    /* renamed from: i, reason: collision with root package name */
    public Person[] f1507i;
    public Set j;
    public e k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f1508l;

    /* renamed from: m, reason: collision with root package name */
    public int f1509m;

    /* renamed from: n, reason: collision with root package name */
    public PersistableBundle f1510n;

    public static ArrayList a(Context context, List list) {
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            ShortcutInfoCompat shortcutInfoCompat = new a(context, (ShortcutInfo) it.next()).a;
            if (TextUtils.isEmpty(shortcutInfoCompat.f1503e)) {
                throw new IllegalArgumentException("Shortcut must have a non-empty label");
            }
            Intent[] intentArr = shortcutInfoCompat.f1501c;
            if (intentArr == null || intentArr.length == 0) {
                throw new IllegalArgumentException("Shortcut must have an intent");
            }
            arrayList.add(shortcutInfoCompat);
        }
        return arrayList;
    }

    public final ShortcutInfo b() {
        ShortcutInfo.Builder intents = new ShortcutInfo.Builder(this.a, this.f1500b).setShortLabel(this.f1503e).setIntents(this.f1501c);
        IconCompat iconCompat = this.f1506h;
        if (iconCompat != null) {
            intents.setIcon(iconCompat.i(this.a));
        }
        if (!TextUtils.isEmpty(this.f1504f)) {
            intents.setLongLabel(this.f1504f);
        }
        if (!TextUtils.isEmpty(this.f1505g)) {
            intents.setDisabledMessage(this.f1505g);
        }
        ComponentName componentName = this.f1502d;
        if (componentName != null) {
            intents.setActivity(componentName);
        }
        Set<String> set = this.j;
        if (set != null) {
            intents.setCategories(set);
        }
        intents.setRank(this.f1509m);
        PersistableBundle persistableBundle = this.f1510n;
        if (persistableBundle != null) {
            intents.setExtras(persistableBundle);
        }
        int i5 = 0;
        if (Build.VERSION.SDK_INT >= 29) {
            Person[] personArr = this.f1507i;
            if (personArr != null && personArr.length > 0) {
                int length = personArr.length;
                android.app.Person[] personArr2 = new android.app.Person[length];
                while (i5 < length) {
                    Person person = this.f1507i[i5];
                    person.getClass();
                    personArr2[i5] = m.h(person);
                    i5++;
                }
                intents.setPersons(personArr2);
            }
            e eVar = this.k;
            if (eVar != null) {
                intents.setLocusId(eVar.f20595b);
            }
            intents.setLongLived(this.f1508l);
        } else {
            if (this.f1510n == null) {
                this.f1510n = new PersistableBundle();
            }
            Person[] personArr3 = this.f1507i;
            if (personArr3 != null && personArr3.length > 0) {
                this.f1510n.putInt("extraPersonCount", personArr3.length);
                while (i5 < this.f1507i.length) {
                    PersistableBundle persistableBundle2 = this.f1510n;
                    StringBuilder sb2 = new StringBuilder("extraPerson_");
                    int i6 = i5 + 1;
                    sb2.append(i6);
                    String sb3 = sb2.toString();
                    Person person2 = this.f1507i[i5];
                    person2.getClass();
                    PersistableBundle persistableBundle3 = new PersistableBundle();
                    CharSequence charSequence = person2.a;
                    persistableBundle3.putString(StackTraceHelper.NAME_KEY, charSequence != null ? charSequence.toString() : null);
                    persistableBundle3.putString("uri", person2.f1482c);
                    persistableBundle3.putString("key", person2.f1483d);
                    persistableBundle3.putBoolean("isBot", person2.f1484e);
                    persistableBundle3.putBoolean("isImportant", person2.f1485f);
                    persistableBundle2.putPersistableBundle(sb3, persistableBundle3);
                    i5 = i6;
                }
            }
            e eVar2 = this.k;
            if (eVar2 != null) {
                this.f1510n.putString("extraLocusId", eVar2.a);
            }
            this.f1510n.putBoolean("extraLongLived", this.f1508l);
            intents.setExtras(this.f1510n);
        }
        if (Build.VERSION.SDK_INT >= 33) {
            e.e.i(intents);
        }
        return intents.build();
    }
}
