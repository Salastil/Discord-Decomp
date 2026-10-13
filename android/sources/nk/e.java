package nk;

import android.graphics.Paint;
import e4.p;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;

/* loaded from: classes3.dex */
public abstract class e {
    public final p a;

    /* renamed from: b, reason: collision with root package name */
    public Calendar f15536b;

    /* renamed from: c, reason: collision with root package name */
    public ArrayList f15537c = new ArrayList();

    /* renamed from: d, reason: collision with root package name */
    public final jk.e f15538d;

    /* renamed from: e, reason: collision with root package name */
    public SimpleDateFormat f15539e;

    public e(jk.e eVar, p pVar) {
        this.a = pVar;
        this.f15538d = eVar;
        this.f15539e = new SimpleDateFormat(a(), pVar.f());
        eVar.setTextAlign(d());
        eVar.setWrapSelectorWheel(i());
    }

    public abstract String a();

    public final int b(Calendar calendar) {
        this.f15539e.setTimeZone(this.a.l());
        return this.f15537c.indexOf(this.f15539e.format(calendar.getTime()));
    }

    public final String c(Calendar calendar) {
        return new SimpleDateFormat(a(), this.a.f()).format(calendar.getTime());
    }

    public abstract Paint.Align d();

    public final String e() {
        if (!h()) {
            return this.f15539e.format(this.f15536b.getTime());
        }
        return (String) this.f15537c.get(this.f15538d.getValue());
    }

    public abstract ArrayList f();

    public abstract boolean h();

    public abstract boolean i();

    public String g(String str) {
        return str;
    }
}
