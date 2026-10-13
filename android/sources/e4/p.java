package e4;

import android.database.Cursor;
import androidx.recyclerview.widget.h0;
import androidx.work.impl.WorkDatabase_Impl;
import com.facebook.react.devsupport.StackTraceHelper;
import j$.util.DesugarTimeZone;
import java.io.Serializable;
import java.text.DecimalFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Locale;
import java.util.TimeZone;
import kotlin.jvm.internal.Intrinsics;
import v3.x;
import v3.y;

/* loaded from: classes.dex */
public final class p {
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f7987b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f7988c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f7989d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f7990e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f7991f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f7992g;

    /* renamed from: h, reason: collision with root package name */
    public final Object f7993h;

    /* renamed from: i, reason: collision with root package name */
    public final Object f7994i;
    public final Object j;
    public final Object k;

    /* renamed from: l, reason: collision with root package name */
    public final Object f7995l;

    /* renamed from: m, reason: collision with root package name */
    public final Object f7996m;

    /* renamed from: n, reason: collision with root package name */
    public final Object f7997n;

    public p() {
        Locale d6;
        this.a = null;
        this.f7987b = new kk.a(0);
        this.f7988c = new kk.a(8);
        String replace = Locale.getDefault().toLanguageTag().replace('-', '_');
        try {
            d6 = gt.a.d(replace);
        } catch (Exception unused) {
            d6 = gt.a.d(replace.substring(0, replace.indexOf("_")));
        }
        kk.b bVar = new kk.b(d6);
        bVar.f13406b = Locale.getDefault().toLanguageTag().replace('-', '_');
        this.f7989d = bVar;
        kk.a aVar = new kk.a(9);
        this.f7990e = aVar;
        kk.a aVar2 = new kk.a((Serializable) 1);
        this.f7991f = aVar2;
        kk.a aVar3 = new kk.a(6);
        this.f7992g = aVar3;
        kk.a aVar4 = new kk.a(5);
        this.f7993h = aVar4;
        kk.a aVar5 = new kk.a(10);
        this.f7994i = aVar5;
        kk.a aVar6 = new kk.a(2);
        kk.a aVar7 = new kk.a(4);
        this.j = aVar7;
        kk.a aVar8 = new kk.a(3);
        this.k = aVar8;
        kk.a aVar9 = new kk.a(1);
        this.f7995l = aVar9;
        gk.i iVar = new gk.i();
        iVar.put("date", (kk.a) this.f7987b);
        iVar.put("mode", (kk.a) this.f7988c);
        iVar.put("locale", bVar);
        iVar.put("textColor", aVar);
        iVar.put("minuteInterval", aVar2);
        iVar.put("minimumDate", aVar3);
        iVar.put("maximumDate", aVar4);
        iVar.put("timezoneOffsetInMinutes", aVar5);
        iVar.put("height", aVar6);
        iVar.put("is24hourSource", aVar7);
        iVar.put(StackTraceHelper.ID_KEY, aVar8);
        iVar.put("dividerColor", aVar9);
        this.f7996m = iVar;
        this.f7997n = new gj.c(12, this);
    }

    public Calendar a(kk.c cVar) {
        String str = (String) cVar.a;
        TimeZone l6 = l();
        Calendar calendar = null;
        if (str != null) {
            try {
                Calendar calendar2 = Calendar.getInstance(l6);
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'", Locale.US);
                simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
                calendar2.setTime(simpleDateFormat.parse(str));
                calendar = calendar2;
            } catch (ParseException e9) {
                e9.printStackTrace();
            }
        }
        if (calendar == null) {
            return calendar;
        }
        calendar.set(13, 0);
        calendar.set(14, 0);
        return calendar;
    }

    public void b(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7988c;
        h3.j a = hVar.a();
        if (str == null) {
            a.S(1);
        } else {
            a.n(1, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public ArrayList c() {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        a3.o g6 = a3.o.g(1, "SELECT * FROM workspec WHERE state=0 ORDER BY last_enqueue_time LIMIT ?");
        g6.z(1, h0.DEFAULT_DRAG_ANIMATION_DURATION);
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n22 = nf.e.n(D, "minimum_retention_duration");
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            int i5 = n22;
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                byte[] bArr = null;
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i6 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                int i10 = i5;
                long j12 = D.getLong(i10);
                int i11 = n21;
                int i12 = n23;
                long j13 = D.getLong(i12);
                n23 = i12;
                int i13 = n24;
                boolean z5 = D.getInt(i13) != 0;
                n24 = i13;
                int i14 = n25;
                x r5 = nf.e.r(D.getInt(i14));
                n25 = i14;
                int i15 = n26;
                int i16 = D.getInt(i15);
                n26 = i15;
                int i17 = n27;
                int i18 = D.getInt(i17);
                n27 = i17;
                int i19 = n28;
                long j14 = D.getLong(i19);
                n28 = i19;
                int i20 = n29;
                int i21 = D.getInt(i20);
                n29 = i20;
                int i22 = n30;
                int i23 = D.getInt(i22);
                n30 = i22;
                int i24 = n31;
                v3.q q5 = nf.e.q(D.getInt(i24));
                n31 = i24;
                int i25 = n32;
                boolean z6 = D.getInt(i25) != 0;
                n32 = i25;
                int i26 = n33;
                boolean z7 = D.getInt(i26) != 0;
                n33 = i26;
                int i27 = n34;
                boolean z8 = D.getInt(i27) != 0;
                n34 = i27;
                int i28 = n35;
                boolean z10 = D.getInt(i28) != 0;
                n35 = i28;
                int i29 = n36;
                long j15 = D.getLong(i29);
                n36 = i29;
                int i30 = n37;
                long j16 = D.getLong(i30);
                n37 = i30;
                int i31 = n38;
                if (!D.isNull(i31)) {
                    bArr = D.getBlob(i31);
                }
                n38 = i31;
                arrayList.add(new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(bArr)), i6, p3, j10, j11, j12, j13, z5, r5, i16, i18, j14, i21, i23));
                n21 = i11;
                i5 = i10;
            }
            D.close();
            oVar.i();
            return arrayList;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public ArrayList d(int i5) {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        a3.o g6 = a3.o.g(1, "SELECT * FROM workspec WHERE state=0 AND schedule_requested_at=-1 ORDER BY last_enqueue_time LIMIT (SELECT MAX(?-COUNT(*), 0) FROM workspec WHERE schedule_requested_at<>-1 AND LENGTH(content_uri_triggers)=0 AND state NOT IN (2, 3, 5))");
        g6.z(1, i5);
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n22 = nf.e.n(D, "minimum_retention_duration");
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            int i6 = n22;
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                byte[] bArr = null;
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i10 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                int i11 = i6;
                long j12 = D.getLong(i11);
                int i12 = n21;
                int i13 = n23;
                long j13 = D.getLong(i13);
                n23 = i13;
                int i14 = n24;
                boolean z5 = D.getInt(i14) != 0;
                n24 = i14;
                int i15 = n25;
                x r5 = nf.e.r(D.getInt(i15));
                n25 = i15;
                int i16 = n26;
                int i17 = D.getInt(i16);
                n26 = i16;
                int i18 = n27;
                int i19 = D.getInt(i18);
                n27 = i18;
                int i20 = n28;
                long j14 = D.getLong(i20);
                n28 = i20;
                int i21 = n29;
                int i22 = D.getInt(i21);
                n29 = i21;
                int i23 = n30;
                int i24 = D.getInt(i23);
                n30 = i23;
                int i25 = n31;
                v3.q q5 = nf.e.q(D.getInt(i25));
                n31 = i25;
                int i26 = n32;
                boolean z6 = D.getInt(i26) != 0;
                n32 = i26;
                int i27 = n33;
                boolean z7 = D.getInt(i27) != 0;
                n33 = i27;
                int i28 = n34;
                boolean z8 = D.getInt(i28) != 0;
                n34 = i28;
                int i29 = n35;
                boolean z10 = D.getInt(i29) != 0;
                n35 = i29;
                int i30 = n36;
                long j15 = D.getLong(i30);
                n36 = i30;
                int i31 = n37;
                long j16 = D.getLong(i31);
                n37 = i31;
                int i32 = n38;
                if (!D.isNull(i32)) {
                    bArr = D.getBlob(i32);
                }
                n38 = i32;
                arrayList.add(new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(bArr)), i10, p3, j10, j11, j12, j13, z5, r5, i17, i19, j14, i22, i24));
                n21 = i12;
                i6 = i11;
            }
            D.close();
            oVar.i();
            return arrayList;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public ArrayList e() {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        a3.o g6 = a3.o.g(0, "SELECT * FROM workspec WHERE state=0 AND schedule_requested_at=-1 AND LENGTH(content_uri_triggers)<>0 ORDER BY last_enqueue_time");
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n22 = nf.e.n(D, "minimum_retention_duration");
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            int i5 = n22;
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                byte[] bArr = null;
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i6 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                int i10 = i5;
                long j12 = D.getLong(i10);
                int i11 = n21;
                int i12 = n23;
                long j13 = D.getLong(i12);
                n23 = i12;
                int i13 = n24;
                boolean z5 = D.getInt(i13) != 0;
                n24 = i13;
                int i14 = n25;
                x r5 = nf.e.r(D.getInt(i14));
                n25 = i14;
                int i15 = n26;
                int i16 = D.getInt(i15);
                n26 = i15;
                int i17 = n27;
                int i18 = D.getInt(i17);
                n27 = i17;
                int i19 = n28;
                long j14 = D.getLong(i19);
                n28 = i19;
                int i20 = n29;
                int i21 = D.getInt(i20);
                n29 = i20;
                int i22 = n30;
                int i23 = D.getInt(i22);
                n30 = i22;
                int i24 = n31;
                v3.q q5 = nf.e.q(D.getInt(i24));
                n31 = i24;
                int i25 = n32;
                boolean z6 = D.getInt(i25) != 0;
                n32 = i25;
                int i26 = n33;
                boolean z7 = D.getInt(i26) != 0;
                n33 = i26;
                int i27 = n34;
                boolean z8 = D.getInt(i27) != 0;
                n34 = i27;
                int i28 = n35;
                boolean z10 = D.getInt(i28) != 0;
                n35 = i28;
                int i29 = n36;
                long j15 = D.getLong(i29);
                n36 = i29;
                int i30 = n37;
                long j16 = D.getLong(i30);
                n37 = i30;
                int i31 = n38;
                if (!D.isNull(i31)) {
                    bArr = D.getBlob(i31);
                }
                n38 = i31;
                arrayList.add(new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(bArr)), i6, p3, j10, j11, j12, j13, z5, r5, i16, i18, j14, i21, i23));
                n21 = i11;
                i5 = i10;
            }
            D.close();
            oVar.i();
            return arrayList;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public Locale f() {
        return (Locale) ((kk.b) this.f7989d).a;
    }

    public ik.b g() {
        return (ik.b) ((kk.a) this.f7988c).a;
    }

    public Calendar h() {
        String str = (String) ((kk.a) this.f7987b).a;
        TimeZone l6 = l();
        Calendar calendar = null;
        if (str != null) {
            try {
                Calendar calendar2 = Calendar.getInstance(l6);
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'", Locale.US);
                simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
                calendar2.setTime(simpleDateFormat.parse(str));
                calendar = calendar2;
            } catch (ParseException e9) {
                e9.printStackTrace();
            }
        }
        int intValue = ((Integer) ((kk.a) this.f7991f).a).intValue();
        if (intValue <= 1) {
            return calendar;
        }
        calendar.add(12, -(Integer.parseInt(new SimpleDateFormat("mm", f()).format(calendar.getTime())) % intValue));
        return (Calendar) calendar.clone();
    }

    public ArrayList i() {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        a3.o g6 = a3.o.g(0, "SELECT * FROM workspec WHERE state=1");
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n22 = nf.e.n(D, "minimum_retention_duration");
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            int i5 = n22;
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                byte[] bArr = null;
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i6 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                int i10 = i5;
                long j12 = D.getLong(i10);
                int i11 = n21;
                int i12 = n23;
                long j13 = D.getLong(i12);
                n23 = i12;
                int i13 = n24;
                boolean z5 = D.getInt(i13) != 0;
                n24 = i13;
                int i14 = n25;
                x r5 = nf.e.r(D.getInt(i14));
                n25 = i14;
                int i15 = n26;
                int i16 = D.getInt(i15);
                n26 = i15;
                int i17 = n27;
                int i18 = D.getInt(i17);
                n27 = i17;
                int i19 = n28;
                long j14 = D.getLong(i19);
                n28 = i19;
                int i20 = n29;
                int i21 = D.getInt(i20);
                n29 = i20;
                int i22 = n30;
                int i23 = D.getInt(i22);
                n30 = i22;
                int i24 = n31;
                v3.q q5 = nf.e.q(D.getInt(i24));
                n31 = i24;
                int i25 = n32;
                boolean z6 = D.getInt(i25) != 0;
                n32 = i25;
                int i26 = n33;
                boolean z7 = D.getInt(i26) != 0;
                n33 = i26;
                int i27 = n34;
                boolean z8 = D.getInt(i27) != 0;
                n34 = i27;
                int i28 = n35;
                boolean z10 = D.getInt(i28) != 0;
                n35 = i28;
                int i29 = n36;
                long j15 = D.getLong(i29);
                n36 = i29;
                int i30 = n37;
                long j16 = D.getLong(i30);
                n37 = i30;
                int i31 = n38;
                if (!D.isNull(i31)) {
                    bArr = D.getBlob(i31);
                }
                n38 = i31;
                arrayList.add(new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(bArr)), i6, p3, j10, j11, j12, j13, z5, r5, i16, i18, j14, i21, i23));
                n21 = i11;
                i5 = i10;
            }
            D.close();
            oVar.i();
            return arrayList;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public ArrayList j() {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        a3.o g6 = a3.o.g(0, "SELECT * FROM workspec WHERE state=0 AND schedule_requested_at<>-1");
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n22 = nf.e.n(D, "minimum_retention_duration");
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            int i5 = n22;
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                byte[] bArr = null;
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i6 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                int i10 = i5;
                long j12 = D.getLong(i10);
                int i11 = n21;
                int i12 = n23;
                long j13 = D.getLong(i12);
                n23 = i12;
                int i13 = n24;
                boolean z5 = D.getInt(i13) != 0;
                n24 = i13;
                int i14 = n25;
                x r5 = nf.e.r(D.getInt(i14));
                n25 = i14;
                int i15 = n26;
                int i16 = D.getInt(i15);
                n26 = i15;
                int i17 = n27;
                int i18 = D.getInt(i17);
                n27 = i17;
                int i19 = n28;
                long j14 = D.getLong(i19);
                n28 = i19;
                int i20 = n29;
                int i21 = D.getInt(i20);
                n29 = i20;
                int i22 = n30;
                int i23 = D.getInt(i22);
                n30 = i22;
                int i24 = n31;
                v3.q q5 = nf.e.q(D.getInt(i24));
                n31 = i24;
                int i25 = n32;
                boolean z6 = D.getInt(i25) != 0;
                n32 = i25;
                int i26 = n33;
                boolean z7 = D.getInt(i26) != 0;
                n33 = i26;
                int i27 = n34;
                boolean z8 = D.getInt(i27) != 0;
                n34 = i27;
                int i28 = n35;
                boolean z10 = D.getInt(i28) != 0;
                n35 = i28;
                int i29 = n36;
                long j15 = D.getLong(i29);
                n36 = i29;
                int i30 = n37;
                long j16 = D.getLong(i30);
                n37 = i30;
                int i31 = n38;
                if (!D.isNull(i31)) {
                    bArr = D.getBlob(i31);
                }
                n38 = i31;
                arrayList.add(new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(bArr)), i6, p3, j10, j11, j12, j13, z5, r5, i16, i18, j14, i21, i23));
                n21 = i11;
                i5 = i10;
            }
            D.close();
            oVar.i();
            return arrayList;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public y k(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        a3.o g6 = a3.o.g(1, "SELECT state FROM workspec WHERE id=?");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            y yVar = null;
            if (D.moveToFirst()) {
                Integer valueOf = D.isNull(0) ? null : Integer.valueOf(D.getInt(0));
                if (valueOf != null) {
                    yVar = nf.e.s(valueOf.intValue());
                }
            }
            return yVar;
        } finally {
            D.close();
            g6.i();
        }
    }

    public TimeZone l() {
        try {
            String str = (String) ((kk.a) this.f7994i).a;
            if (str != null && !str.equals("")) {
                int parseInt = Integer.parseInt(str);
                int abs = Math.abs(parseInt);
                return DesugarTimeZone.getTimeZone("GMT" + (parseInt < 0 ? '-' : '+') + ((int) Math.floor(abs / 60.0f)) + ":" + new DecimalFormat("00").format(abs - (r3 * 60)));
            }
            return TimeZone.getDefault();
        } catch (Exception e9) {
            e9.printStackTrace();
            return TimeZone.getDefault();
        }
    }

    public ArrayList m(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        a3.o g6 = a3.o.g(1, "SELECT id FROM workspec WHERE state NOT IN (2, 3, 5) AND id IN (SELECT work_spec_id FROM workname WHERE name=?)");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                arrayList.add(D.isNull(0) ? null : D.getString(0));
            }
            return arrayList;
        } finally {
            D.close();
            g6.i();
        }
    }

    public o n(String str) {
        a3.o oVar;
        int n6;
        int n10;
        int n11;
        int n12;
        int n13;
        int n14;
        int n15;
        int n16;
        int n17;
        int n18;
        int n19;
        int n20;
        int n21;
        int n22;
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        a3.o g6 = a3.o.g(1, "SELECT * FROM workspec WHERE id=?");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            n6 = nf.e.n(D, StackTraceHelper.ID_KEY);
            n10 = nf.e.n(D, "state");
            n11 = nf.e.n(D, "worker_class_name");
            n12 = nf.e.n(D, "input_merger_class_name");
            n13 = nf.e.n(D, "input");
            n14 = nf.e.n(D, "output");
            n15 = nf.e.n(D, "initial_delay");
            n16 = nf.e.n(D, "interval_duration");
            n17 = nf.e.n(D, "flex_duration");
            n18 = nf.e.n(D, "run_attempt_count");
            n19 = nf.e.n(D, "backoff_policy");
            n20 = nf.e.n(D, "backoff_delay_duration");
            n21 = nf.e.n(D, "last_enqueue_time");
            n22 = nf.e.n(D, "minimum_retention_duration");
            oVar = g6;
        } catch (Throwable th2) {
            th = th2;
            oVar = g6;
        }
        try {
            int n23 = nf.e.n(D, "schedule_requested_at");
            int n24 = nf.e.n(D, "run_in_foreground");
            int n25 = nf.e.n(D, "out_of_quota_policy");
            int n26 = nf.e.n(D, "period_count");
            int n27 = nf.e.n(D, "generation");
            int n28 = nf.e.n(D, "next_schedule_time_override");
            int n29 = nf.e.n(D, "next_schedule_time_override_generation");
            int n30 = nf.e.n(D, "stop_reason");
            int n31 = nf.e.n(D, "required_network_type");
            int n32 = nf.e.n(D, "requires_charging");
            int n33 = nf.e.n(D, "requires_device_idle");
            int n34 = nf.e.n(D, "requires_battery_not_low");
            int n35 = nf.e.n(D, "requires_storage_not_low");
            int n36 = nf.e.n(D, "trigger_content_update_delay");
            int n37 = nf.e.n(D, "trigger_max_content_delay");
            int n38 = nf.e.n(D, "content_uri_triggers");
            o oVar2 = null;
            byte[] blob = null;
            if (D.moveToFirst()) {
                String string = D.isNull(n6) ? null : D.getString(n6);
                y s2 = nf.e.s(D.getInt(n10));
                String string2 = D.isNull(n11) ? null : D.getString(n11);
                String string3 = D.isNull(n12) ? null : D.getString(n12);
                v3.f a = v3.f.a(D.isNull(n13) ? null : D.getBlob(n13));
                v3.f a10 = v3.f.a(D.isNull(n14) ? null : D.getBlob(n14));
                long j = D.getLong(n15);
                long j5 = D.getLong(n16);
                long j7 = D.getLong(n17);
                int i5 = D.getInt(n18);
                v3.a p3 = nf.e.p(D.getInt(n19));
                long j10 = D.getLong(n20);
                long j11 = D.getLong(n21);
                long j12 = D.getLong(n22);
                long j13 = D.getLong(n23);
                boolean z5 = D.getInt(n24) != 0;
                x r5 = nf.e.r(D.getInt(n25));
                int i6 = D.getInt(n26);
                int i10 = D.getInt(n27);
                long j14 = D.getLong(n28);
                int i11 = D.getInt(n29);
                int i12 = D.getInt(n30);
                v3.q q5 = nf.e.q(D.getInt(n31));
                boolean z6 = D.getInt(n32) != 0;
                boolean z7 = D.getInt(n33) != 0;
                boolean z8 = D.getInt(n34) != 0;
                boolean z10 = D.getInt(n35) != 0;
                long j15 = D.getLong(n36);
                long j16 = D.getLong(n37);
                if (!D.isNull(n38)) {
                    blob = D.getBlob(n38);
                }
                oVar2 = new o(string, s2, string2, string3, a, a10, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, nf.e.e(blob)), i5, p3, j10, j11, j12, j13, z5, r5, i6, i10, j14, i11, i12);
            }
            D.close();
            oVar.i();
            return oVar2;
        } catch (Throwable th3) {
            th = th3;
            D.close();
            oVar.i();
            throw th;
        }
    }

    public ArrayList o(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        a3.o g6 = a3.o.g(1, "SELECT id, state FROM workspec WHERE id IN (SELECT work_spec_id FROM workname WHERE name=?)");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                String id2 = D.isNull(0) ? null : D.getString(0);
                y state = nf.e.s(D.getInt(1));
                Intrinsics.checkNotNullParameter(id2, "id");
                Intrinsics.checkNotNullParameter(state, "state");
                n nVar = new n();
                nVar.a = id2;
                nVar.f7966b = state;
                arrayList.add(nVar);
            }
            return arrayList;
        } finally {
            D.close();
            g6.i();
        }
    }

    public void p(long j, String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7995l;
        h3.j a = hVar.a();
        a.z(1, j);
        if (str == null) {
            a.S(2);
        } else {
            a.n(2, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public void q(int i5, String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.k;
        h3.j a = hVar.a();
        if (str == null) {
            a.S(1);
        } else {
            a.n(1, str);
        }
        a.z(2, i5);
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public void r(long j, String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7993h;
        h3.j a = hVar.a();
        a.z(1, j);
        if (str == null) {
            a.S(2);
        } else {
            a.n(2, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public void s(String str, v3.f fVar) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7992g;
        h3.j a = hVar.a();
        byte[] b10 = v3.f.b(fVar);
        if (b10 == null) {
            a.S(1);
        } else {
            a.F(b10, 1);
        }
        if (str == null) {
            a.S(2);
        } else {
            a.n(2, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public void t(y yVar, String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7989d;
        h3.j a = hVar.a();
        a.z(1, nf.e.C(yVar));
        if (str == null) {
            a.S(2);
        } else {
            a.n(2, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public void u(int i5, String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.a;
        workDatabase_Impl.b();
        h hVar = (h) this.f7997n;
        h3.j a = hVar.a();
        a.z(1, i5);
        if (str == null) {
            a.S(2);
        } else {
            a.n(2, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    public p(WorkDatabase_Impl database) {
        this.a = database;
        Intrinsics.checkNotNullParameter(database, "database");
        this.f7987b = new b(database, false, 5);
        Intrinsics.checkNotNullParameter(database, "database");
        new h(database, 12);
        this.f7988c = new h(database, 13);
        this.f7989d = new h(database, 14);
        this.f7990e = new h(database, 15);
        this.f7991f = new h(database, 16);
        this.f7992g = new h(database, 17);
        this.f7993h = new h(database, 18);
        this.f7994i = new h(database, 19);
        this.j = new h(database, 4);
        new h(database, 5);
        this.k = new h(database, 6);
        this.f7995l = new h(database, 7);
        this.f7996m = new h(database, 8);
        new h(database, 9);
        new h(database, 10);
        this.f7997n = new h(database, 11);
    }
}
