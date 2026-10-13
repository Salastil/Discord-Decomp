package nk;

import android.graphics.Paint;
import android.text.format.DateUtils;
import e4.p;
import gk.k;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.HashMap;
import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;
import ls.h;
import m3.n;
import net.time4j.e1;
import net.time4j.i1;
import net.time4j.l1;

/* loaded from: classes3.dex */
public final class c extends e {

    /* renamed from: f, reason: collision with root package name */
    public String f15533f;

    /* renamed from: g, reason: collision with root package name */
    public HashMap f15534g;

    @Override // nk.e
    public final String a() {
        return ((SimpleDateFormat) DateFormat.getDateInstance(0, this.a.f())).toLocalizedPattern().replaceAll(",", "").replaceAll("([a-zA-Z]+)", " $1").trim().replace("EEEE", "EEE").replace("MMMM", "MMM");
    }

    @Override // nk.e
    public final Paint.Align d() {
        return Paint.Align.RIGHT;
    }

    @Override // nk.e
    public final ArrayList f() {
        Calendar h6;
        Calendar h7;
        Calendar calendar;
        ArrayList arrayList = new ArrayList();
        this.f15534g = new HashMap();
        p pVar = this.a;
        Calendar a = pVar.a((kk.a) pVar.f7993h);
        Calendar a10 = pVar.a((kk.a) pVar.f7992g);
        if (a10 != null) {
            h6 = (Calendar) a10.clone();
        } else if (a != null) {
            h6 = (Calendar) a.clone();
            h6.add(5, (-h6.getActualMaximum(6)) / 2);
        } else {
            h6 = pVar.h();
            h6.add(5, -75);
        }
        Calendar a11 = pVar.a((kk.a) pVar.f7993h);
        Calendar a12 = pVar.a((kk.a) pVar.f7992g);
        if (a11 != null) {
            h7 = (Calendar) a11.clone();
        } else if (a12 != null) {
            h7 = (Calendar) a12.clone();
            h7.add(5, h7.getActualMaximum(6) / 2);
        } else {
            h7 = pVar.h();
            h7.add(5, 75);
        }
        do {
            String format = this.f15539e.format(h6.getTime());
            arrayList.add(format);
            this.f15534g.put(format, new SimpleDateFormat(n.K(((kk.b) pVar.f7989d).f13406b, k.f9337d), pVar.f()).format(h6.getTime()));
            if (DateUtils.isToday(h6.getTimeInMillis())) {
                this.f15533f = format;
            }
            h6.add(5, 1);
            calendar = (Calendar) h6.clone();
            calendar.set(11, 0);
            calendar.set(12, 0);
            calendar.set(13, 0);
            calendar.set(14, 0);
        } while (!calendar.after(h7));
        return arrayList;
    }

    @Override // nk.e
    public final String g(String str) {
        if (!str.equals(this.f15533f)) {
            return (String) this.f15534g.get(str);
        }
        Locale f2 = this.a.f();
        ConcurrentHashMap concurrentHashMap = e1.f15248c;
        e1 e1Var = (e1) concurrentHashMap.get(f2);
        if (e1Var == null) {
            i1 i1Var = i1.f15258c;
            h hVar = e1.f15247b;
            hVar.c(f2);
            hVar.a(f2);
            e1Var = new e1(f2, i1Var);
            e1 e1Var2 = (e1) concurrentHashMap.putIfAbsent(f2, e1Var);
            if (e1Var2 != null) {
                e1Var = e1Var2;
            }
        }
        Locale locale = e1Var.a;
        if (locale == null) {
            ConcurrentHashMap concurrentHashMap2 = l1.f15271b;
            throw new NullPointerException("Missing language.");
        }
        ConcurrentHashMap concurrentHashMap3 = l1.f15271b;
        l1 l1Var = (l1) concurrentHashMap3.get(locale);
        if (l1Var == null) {
            l1Var = new l1(locale);
            l1 l1Var2 = (l1) concurrentHashMap3.putIfAbsent(locale, l1Var);
            if (l1Var2 != null) {
                l1Var = l1Var2;
            }
        }
        String str2 = l1Var.a;
        if (!Character.isUpperCase(str.charAt(0))) {
            return str2;
        }
        return str2.substring(0, 1).toUpperCase() + str2.substring(1);
    }

    @Override // nk.e
    public final boolean h() {
        return this.a.g() == ik.b.f10939i;
    }

    @Override // nk.e
    public final boolean i() {
        return false;
    }
}
