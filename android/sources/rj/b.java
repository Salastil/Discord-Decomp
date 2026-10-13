package rj;

import a3.n;
import a5.a0;
import android.graphics.Rect;
import android.net.Uri;
import android.util.Log;
import androidx.profileinstaller.ProfileInstallReceiver;
import androidx.recyclerview.widget.h0;
import c3.e;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import di.o;
import e4.i;
import hc.g1;
import ie.m0;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import jg.d;
import k2.r;
import nd.a1;
import nd.r0;
import nd.s0;
import nd.z0;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;
import qa.s;
import sd.t;
import th.m;
import xh.g;

/* loaded from: classes3.dex */
public final class b implements r0, d, da.b, m0, o, y2.b {

    /* renamed from: d, reason: collision with root package name */
    public final Object f17393d;

    public /* synthetic */ b(Object obj) {
        this.f17393d = obj;
    }

    public static void h(h3.c cVar) {
        cVar.l("CREATE TABLE IF NOT EXISTS `Dependency` (`work_spec_id` TEXT NOT NULL, `prerequisite_id` TEXT NOT NULL, PRIMARY KEY(`work_spec_id`, `prerequisite_id`), FOREIGN KEY(`work_spec_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE , FOREIGN KEY(`prerequisite_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE )");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_Dependency_work_spec_id` ON `Dependency` (`work_spec_id`)");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_Dependency_prerequisite_id` ON `Dependency` (`prerequisite_id`)");
        cVar.l("CREATE TABLE IF NOT EXISTS `WorkSpec` (`id` TEXT NOT NULL, `state` INTEGER NOT NULL, `worker_class_name` TEXT NOT NULL, `input_merger_class_name` TEXT NOT NULL, `input` BLOB NOT NULL, `output` BLOB NOT NULL, `initial_delay` INTEGER NOT NULL, `interval_duration` INTEGER NOT NULL, `flex_duration` INTEGER NOT NULL, `run_attempt_count` INTEGER NOT NULL, `backoff_policy` INTEGER NOT NULL, `backoff_delay_duration` INTEGER NOT NULL, `last_enqueue_time` INTEGER NOT NULL DEFAULT -1, `minimum_retention_duration` INTEGER NOT NULL, `schedule_requested_at` INTEGER NOT NULL, `run_in_foreground` INTEGER NOT NULL, `out_of_quota_policy` INTEGER NOT NULL, `period_count` INTEGER NOT NULL DEFAULT 0, `generation` INTEGER NOT NULL DEFAULT 0, `next_schedule_time_override` INTEGER NOT NULL DEFAULT 9223372036854775807, `next_schedule_time_override_generation` INTEGER NOT NULL DEFAULT 0, `stop_reason` INTEGER NOT NULL DEFAULT -256, `required_network_type` INTEGER NOT NULL, `requires_charging` INTEGER NOT NULL, `requires_device_idle` INTEGER NOT NULL, `requires_battery_not_low` INTEGER NOT NULL, `requires_storage_not_low` INTEGER NOT NULL, `trigger_content_update_delay` INTEGER NOT NULL, `trigger_max_content_delay` INTEGER NOT NULL, `content_uri_triggers` BLOB NOT NULL, PRIMARY KEY(`id`))");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_WorkSpec_schedule_requested_at` ON `WorkSpec` (`schedule_requested_at`)");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_WorkSpec_last_enqueue_time` ON `WorkSpec` (`last_enqueue_time`)");
        cVar.l("CREATE TABLE IF NOT EXISTS `WorkTag` (`tag` TEXT NOT NULL, `work_spec_id` TEXT NOT NULL, PRIMARY KEY(`tag`, `work_spec_id`), FOREIGN KEY(`work_spec_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE )");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_WorkTag_work_spec_id` ON `WorkTag` (`work_spec_id`)");
        cVar.l("CREATE TABLE IF NOT EXISTS `SystemIdInfo` (`work_spec_id` TEXT NOT NULL, `generation` INTEGER NOT NULL DEFAULT 0, `system_id` INTEGER NOT NULL, PRIMARY KEY(`work_spec_id`, `generation`), FOREIGN KEY(`work_spec_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE )");
        cVar.l("CREATE TABLE IF NOT EXISTS `WorkName` (`name` TEXT NOT NULL, `work_spec_id` TEXT NOT NULL, PRIMARY KEY(`name`, `work_spec_id`), FOREIGN KEY(`work_spec_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE )");
        cVar.l("CREATE INDEX IF NOT EXISTS `index_WorkName_work_spec_id` ON `WorkName` (`work_spec_id`)");
        cVar.l("CREATE TABLE IF NOT EXISTS `WorkProgress` (`work_spec_id` TEXT NOT NULL, `progress` BLOB NOT NULL, PRIMARY KEY(`work_spec_id`), FOREIGN KEY(`work_spec_id`) REFERENCES `WorkSpec`(`id`) ON UPDATE CASCADE ON DELETE CASCADE )");
        cVar.l("CREATE TABLE IF NOT EXISTS `Preference` (`key` TEXT NOT NULL, `long_value` INTEGER, PRIMARY KEY(`key`))");
        cVar.l("CREATE TABLE IF NOT EXISTS room_master_table (id INTEGER PRIMARY KEY,identity_hash TEXT)");
        cVar.l("INSERT OR REPLACE INTO room_master_table (id,identity_hash) VALUES(42, '7d73d21f1bd82c9e5268b6dcf9fde2cb')");
    }

    public static n k(h3.c cVar) {
        HashMap hashMap = new HashMap(2);
        hashMap.put("work_spec_id", new c3.a("work_spec_id", "TEXT", null, 1, 1, true));
        hashMap.put("prerequisite_id", new c3.a("prerequisite_id", "TEXT", null, 2, 1, true));
        HashSet hashSet = new HashSet(2);
        hashSet.add(new c3.b(Arrays.asList("work_spec_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        hashSet.add(new c3.b(Arrays.asList("prerequisite_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        HashSet hashSet2 = new HashSet(2);
        hashSet2.add(new c3.d("index_Dependency_work_spec_id", false, Arrays.asList("work_spec_id"), Arrays.asList("ASC")));
        hashSet2.add(new c3.d("index_Dependency_prerequisite_id", false, Arrays.asList("prerequisite_id"), Arrays.asList("ASC")));
        e eVar = new e("Dependency", hashMap, hashSet, hashSet2);
        e a = e.a(cVar, "Dependency");
        if (!eVar.equals(a)) {
            return new n(false, "Dependency(androidx.work.impl.model.Dependency).\n Expected:\n" + eVar + "\n Found:\n" + a);
        }
        HashMap hashMap2 = new HashMap(30);
        hashMap2.put(StackTraceHelper.ID_KEY, new c3.a(StackTraceHelper.ID_KEY, "TEXT", null, 1, 1, true));
        hashMap2.put("state", new c3.a("state", "INTEGER", null, 0, 1, true));
        hashMap2.put("worker_class_name", new c3.a("worker_class_name", "TEXT", null, 0, 1, true));
        hashMap2.put("input_merger_class_name", new c3.a("input_merger_class_name", "TEXT", null, 0, 1, true));
        hashMap2.put("input", new c3.a("input", "BLOB", null, 0, 1, true));
        hashMap2.put("output", new c3.a("output", "BLOB", null, 0, 1, true));
        hashMap2.put("initial_delay", new c3.a("initial_delay", "INTEGER", null, 0, 1, true));
        hashMap2.put("interval_duration", new c3.a("interval_duration", "INTEGER", null, 0, 1, true));
        hashMap2.put("flex_duration", new c3.a("flex_duration", "INTEGER", null, 0, 1, true));
        hashMap2.put("run_attempt_count", new c3.a("run_attempt_count", "INTEGER", null, 0, 1, true));
        hashMap2.put("backoff_policy", new c3.a("backoff_policy", "INTEGER", null, 0, 1, true));
        hashMap2.put("backoff_delay_duration", new c3.a("backoff_delay_duration", "INTEGER", null, 0, 1, true));
        hashMap2.put("last_enqueue_time", new c3.a("last_enqueue_time", "INTEGER", "-1", 0, 1, true));
        hashMap2.put("minimum_retention_duration", new c3.a("minimum_retention_duration", "INTEGER", null, 0, 1, true));
        hashMap2.put("schedule_requested_at", new c3.a("schedule_requested_at", "INTEGER", null, 0, 1, true));
        hashMap2.put("run_in_foreground", new c3.a("run_in_foreground", "INTEGER", null, 0, 1, true));
        hashMap2.put("out_of_quota_policy", new c3.a("out_of_quota_policy", "INTEGER", null, 0, 1, true));
        hashMap2.put("period_count", new c3.a("period_count", "INTEGER", "0", 0, 1, true));
        hashMap2.put("generation", new c3.a("generation", "INTEGER", "0", 0, 1, true));
        hashMap2.put("next_schedule_time_override", new c3.a("next_schedule_time_override", "INTEGER", "9223372036854775807", 0, 1, true));
        hashMap2.put("next_schedule_time_override_generation", new c3.a("next_schedule_time_override_generation", "INTEGER", "0", 0, 1, true));
        hashMap2.put("stop_reason", new c3.a("stop_reason", "INTEGER", "-256", 0, 1, true));
        hashMap2.put("required_network_type", new c3.a("required_network_type", "INTEGER", null, 0, 1, true));
        hashMap2.put("requires_charging", new c3.a("requires_charging", "INTEGER", null, 0, 1, true));
        hashMap2.put("requires_device_idle", new c3.a("requires_device_idle", "INTEGER", null, 0, 1, true));
        hashMap2.put("requires_battery_not_low", new c3.a("requires_battery_not_low", "INTEGER", null, 0, 1, true));
        hashMap2.put("requires_storage_not_low", new c3.a("requires_storage_not_low", "INTEGER", null, 0, 1, true));
        hashMap2.put("trigger_content_update_delay", new c3.a("trigger_content_update_delay", "INTEGER", null, 0, 1, true));
        hashMap2.put("trigger_max_content_delay", new c3.a("trigger_max_content_delay", "INTEGER", null, 0, 1, true));
        hashMap2.put("content_uri_triggers", new c3.a("content_uri_triggers", "BLOB", null, 0, 1, true));
        HashSet hashSet3 = new HashSet(0);
        HashSet hashSet4 = new HashSet(2);
        hashSet4.add(new c3.d("index_WorkSpec_schedule_requested_at", false, Arrays.asList("schedule_requested_at"), Arrays.asList("ASC")));
        hashSet4.add(new c3.d("index_WorkSpec_last_enqueue_time", false, Arrays.asList("last_enqueue_time"), Arrays.asList("ASC")));
        e eVar2 = new e("WorkSpec", hashMap2, hashSet3, hashSet4);
        e a10 = e.a(cVar, "WorkSpec");
        if (!eVar2.equals(a10)) {
            return new n(false, "WorkSpec(androidx.work.impl.model.WorkSpec).\n Expected:\n" + eVar2 + "\n Found:\n" + a10);
        }
        HashMap hashMap3 = new HashMap(2);
        hashMap3.put("tag", new c3.a("tag", "TEXT", null, 1, 1, true));
        hashMap3.put("work_spec_id", new c3.a("work_spec_id", "TEXT", null, 2, 1, true));
        HashSet hashSet5 = new HashSet(1);
        hashSet5.add(new c3.b(Arrays.asList("work_spec_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        HashSet hashSet6 = new HashSet(1);
        hashSet6.add(new c3.d("index_WorkTag_work_spec_id", false, Arrays.asList("work_spec_id"), Arrays.asList("ASC")));
        e eVar3 = new e("WorkTag", hashMap3, hashSet5, hashSet6);
        e a11 = e.a(cVar, "WorkTag");
        if (!eVar3.equals(a11)) {
            return new n(false, "WorkTag(androidx.work.impl.model.WorkTag).\n Expected:\n" + eVar3 + "\n Found:\n" + a11);
        }
        HashMap hashMap4 = new HashMap(3);
        hashMap4.put("work_spec_id", new c3.a("work_spec_id", "TEXT", null, 1, 1, true));
        hashMap4.put("generation", new c3.a("generation", "INTEGER", "0", 2, 1, true));
        hashMap4.put("system_id", new c3.a("system_id", "INTEGER", null, 0, 1, true));
        HashSet hashSet7 = new HashSet(1);
        hashSet7.add(new c3.b(Arrays.asList("work_spec_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        e eVar4 = new e("SystemIdInfo", hashMap4, hashSet7, new HashSet(0));
        e a12 = e.a(cVar, "SystemIdInfo");
        if (!eVar4.equals(a12)) {
            return new n(false, "SystemIdInfo(androidx.work.impl.model.SystemIdInfo).\n Expected:\n" + eVar4 + "\n Found:\n" + a12);
        }
        HashMap hashMap5 = new HashMap(2);
        hashMap5.put(StackTraceHelper.NAME_KEY, new c3.a(StackTraceHelper.NAME_KEY, "TEXT", null, 1, 1, true));
        hashMap5.put("work_spec_id", new c3.a("work_spec_id", "TEXT", null, 2, 1, true));
        HashSet hashSet8 = new HashSet(1);
        hashSet8.add(new c3.b(Arrays.asList("work_spec_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        HashSet hashSet9 = new HashSet(1);
        hashSet9.add(new c3.d("index_WorkName_work_spec_id", false, Arrays.asList("work_spec_id"), Arrays.asList("ASC")));
        e eVar5 = new e("WorkName", hashMap5, hashSet8, hashSet9);
        e a13 = e.a(cVar, "WorkName");
        if (!eVar5.equals(a13)) {
            return new n(false, "WorkName(androidx.work.impl.model.WorkName).\n Expected:\n" + eVar5 + "\n Found:\n" + a13);
        }
        HashMap hashMap6 = new HashMap(2);
        hashMap6.put("work_spec_id", new c3.a("work_spec_id", "TEXT", null, 1, 1, true));
        hashMap6.put(ReactProgressBarViewManager.PROP_PROGRESS, new c3.a(ReactProgressBarViewManager.PROP_PROGRESS, "BLOB", null, 0, 1, true));
        HashSet hashSet10 = new HashSet(1);
        hashSet10.add(new c3.b(Arrays.asList("work_spec_id"), Arrays.asList(StackTraceHelper.ID_KEY), "WorkSpec", "CASCADE", "CASCADE"));
        e eVar6 = new e("WorkProgress", hashMap6, hashSet10, new HashSet(0));
        e a14 = e.a(cVar, "WorkProgress");
        if (!eVar6.equals(a14)) {
            return new n(false, "WorkProgress(androidx.work.impl.model.WorkProgress).\n Expected:\n" + eVar6 + "\n Found:\n" + a14);
        }
        HashMap hashMap7 = new HashMap(2);
        hashMap7.put("key", new c3.a("key", "TEXT", null, 1, 1, true));
        hashMap7.put("long_value", new c3.a("long_value", "INTEGER", null, 0, 1, false));
        e eVar7 = new e("Preference", hashMap7, new HashSet(0), new HashSet(0));
        e a15 = e.a(cVar, "Preference");
        if (eVar7.equals(a15)) {
            return new n(true, (String) null);
        }
        return new n(false, "Preference(androidx.work.impl.model.Preference).\n Expected:\n" + eVar7 + "\n Found:\n" + a15);
    }

    @Override // di.q
    public /* bridge */ /* synthetic */ Object a() {
        return new xh.d((g) ((di.n) this.f17393d).a());
    }

    @Override // da.b
    public da.a b(i iVar, Rect rect) {
        AnimatedFactoryV2Impl animatedFactoryV2Impl = (AnimatedFactoryV2Impl) this.f17393d;
        if (animatedFactoryV2Impl.f4513g == null) {
            animatedFactoryV2Impl.f4513g = new s();
        }
        return new da.a(animatedFactoryV2Impl.f4513g, iVar, rect, animatedFactoryV2Impl.f4510d);
    }

    @Override // nd.r0
    public void c(s0 s0Var) {
        sd.n nVar = (sd.n) this.f17393d;
        nVar.N.c(nVar);
    }

    @Override // y2.b
    public void e() {
        Log.d("ProfileInstaller", "DIAGNOSTIC_PROFILE_IS_COMPRESSED");
    }

    @Override // ie.m0
    public Object f(Uri uri, ie.n nVar) {
        try {
            XmlPullParser newPullParser = ((XmlPullParserFactory) this.f17393d).newPullParser();
            newPullParser.setInput(nVar, null);
            return (vd.c) new vd.g(uri.toString()).e(newPullParser);
        } catch (XmlPullParserException e9) {
            throw g1.b(null, e9);
        }
    }

    @Override // y2.b
    public void g(int i5, Object obj) {
        String str;
        switch (i5) {
            case 1:
                str = "RESULT_INSTALL_SUCCESS";
                break;
            case 2:
                str = "RESULT_ALREADY_INSTALLED";
                break;
            case 3:
                str = "RESULT_UNSUPPORTED_ART_VERSION";
                break;
            case 4:
                str = "RESULT_NOT_WRITABLE";
                break;
            case 5:
                str = "RESULT_DESIRED_FORMAT_UNSUPPORTED";
                break;
            case 6:
                str = "RESULT_BASELINE_PROFILE_NOT_FOUND";
                break;
            case 7:
                str = "RESULT_IO_EXCEPTION";
                break;
            case 8:
                str = "RESULT_PARSE_EXCEPTION";
                break;
            case 9:
            default:
                str = "";
                break;
            case 10:
                str = "RESULT_INSTALL_SKIP_FILE_SUCCESS";
                break;
            case 11:
                str = "RESULT_DELETE_SKIP_FILE_SUCCESS";
                break;
        }
        if (i5 == 6 || i5 == 7 || i5 == 8) {
            Log.e("ProfileInstaller", str, (Throwable) obj);
        } else {
            Log.d("ProfileInstaller", str);
        }
        ((ProfileInstallReceiver) this.f17393d).setResultCode(i5);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x068a, code lost:
    
        if (r3.length() <= 0) goto L444;
     */
    /* JADX WARN: Code restructure failed: missing block: B:139:0x068c, code lost:
    
        r2.append((java.lang.CharSequence) r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:140:0x068f, code lost:
    
        r2 = r2.toString();
     */
    /* JADX WARN: Code restructure failed: missing block: B:141:0x069a, code lost:
    
        if (r4.isEmpty() == false) goto L447;
     */
    /* JADX WARN: Code restructure failed: missing block: B:142:0x069c, code lost:
    
        r4 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x06a0, code lost:
    
        return new hc.s0(r0, r2, r4, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x03a0, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Removed duplicated region for block: B:128:0x03c6 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:146:? A[LOOP:15: B:113:0x035b->B:146:?, LOOP_END, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public hc.s0 i(nj.b bVar) {
        byte[] bArr;
        int i5;
        int g6;
        int i6;
        int g10;
        int g11;
        r rVar = new r(bVar);
        c cVar = (c) rVar.f13144v;
        nj.b bVar2 = (nj.b) rVar.f13143i;
        int i10 = cVar.f17400g;
        byte[] bArr2 = new byte[i10];
        nj.b bVar3 = (nj.b) rVar.f13142e;
        int i11 = bVar3.f15511e;
        int i12 = bVar3.f15510d;
        int i13 = 0;
        int i14 = 0;
        boolean z5 = false;
        int i15 = 0;
        boolean z6 = false;
        boolean z7 = false;
        boolean z8 = false;
        int i16 = 4;
        while (true) {
            if (i16 == i11 && i14 == 0 && !z5) {
                int i17 = i15 + 1;
                int i18 = i11 - 1;
                int i19 = (rVar.H(i18, i13, i11, i12) ? 1 : 0) << 1;
                if (rVar.H(i18, 1, i11, i12)) {
                    i19 |= 1;
                }
                int i20 = i19 << 1;
                if (rVar.H(i18, 2, i11, i12)) {
                    i20 |= 1;
                }
                int i21 = i20 << 1;
                bArr = bArr2;
                if (rVar.H(0, i12 - 2, i11, i12)) {
                    i21 |= 1;
                }
                int i22 = i21 << 1;
                int i23 = i12 - 1;
                if (rVar.H(0, i23, i11, i12)) {
                    i22 |= 1;
                }
                int i24 = i22 << 1;
                if (rVar.H(1, i23, i11, i12)) {
                    i24 |= 1;
                }
                int i25 = i24 << 1;
                if (rVar.H(2, i23, i11, i12)) {
                    i25 |= 1;
                }
                int i26 = i25 << 1;
                if (rVar.H(3, i23, i11, i12)) {
                    i26 |= 1;
                }
                bArr[i15] = (byte) i26;
                i16 -= 2;
                i14 += 2;
                i15 = i17;
                z5 = true;
            } else {
                bArr = bArr2;
                int i27 = i11 - 2;
                if (i16 == i27 && i14 == 0 && (i12 & 3) != 0 && !z6) {
                    int i28 = i15 + 1;
                    int i29 = (rVar.H(i11 + (-3), 0, i11, i12) ? 1 : 0) << 1;
                    if (rVar.H(i27, 0, i11, i12)) {
                        i29 |= 1;
                    }
                    int i30 = i29 << 1;
                    if (rVar.H(i11 - 1, 0, i11, i12)) {
                        i30 |= 1;
                    }
                    int i31 = i30 << 1;
                    if (rVar.H(0, i12 - 4, i11, i12)) {
                        i31 |= 1;
                    }
                    int i32 = i31 << 1;
                    if (rVar.H(0, i12 - 3, i11, i12)) {
                        i32 |= 1;
                    }
                    int i33 = i32 << 1;
                    if (rVar.H(0, i12 - 2, i11, i12)) {
                        i33 |= 1;
                    }
                    int i34 = i33 << 1;
                    int i35 = i12 - 1;
                    if (rVar.H(0, i35, i11, i12)) {
                        i34 |= 1;
                    }
                    int i36 = i34 << 1;
                    if (rVar.H(1, i35, i11, i12)) {
                        i36 |= 1;
                    }
                    bArr[i15] = (byte) i36;
                    i16 -= 2;
                    i14 += 2;
                    i15 = i28;
                    z6 = true;
                } else if (i16 == i11 + 4 && i14 == 2 && (i12 & 7) == 0 && !z7) {
                    int i37 = i15 + 1;
                    int i38 = i11 - 1;
                    int i39 = (rVar.H(i38, 0, i11, i12) ? 1 : 0) << 1;
                    int i40 = i12 - 1;
                    if (rVar.H(i38, i40, i11, i12)) {
                        i39 |= 1;
                    }
                    int i41 = i39 << 1;
                    int i42 = i12 - 3;
                    if (rVar.H(0, i42, i11, i12)) {
                        i41 |= 1;
                    }
                    int i43 = i41 << 1;
                    int i44 = i12 - 2;
                    if (rVar.H(0, i44, i11, i12)) {
                        i43 |= 1;
                    }
                    int i45 = i43 << 1;
                    if (rVar.H(0, i40, i11, i12)) {
                        i45 |= 1;
                    }
                    int i46 = i45 << 1;
                    int i47 = (rVar.H(1, i42, i11, i12) ? i46 | 1 : i46) << 1;
                    if (rVar.H(1, i44, i11, i12)) {
                        i47 |= 1;
                    }
                    int i48 = i47 << 1;
                    if (rVar.H(1, i40, i11, i12)) {
                        i48 |= 1;
                    }
                    bArr[i15] = (byte) i48;
                    i16 -= 2;
                    i14 += 2;
                    i15 = i37;
                    z7 = true;
                } else if (i16 == i27 && i14 == 0 && (i12 & 7) == 4 && !z8) {
                    int i49 = i15 + 1;
                    int i50 = (rVar.H(i11 + (-3), 0, i11, i12) ? 1 : 0) << 1;
                    if (rVar.H(i27, 0, i11, i12)) {
                        i50 |= 1;
                    }
                    int i51 = i50 << 1;
                    if (rVar.H(i11 - 1, 0, i11, i12)) {
                        i51 |= 1;
                    }
                    int i52 = i51 << 1;
                    if (rVar.H(0, i12 - 2, i11, i12)) {
                        i52 |= 1;
                    }
                    int i53 = i52 << 1;
                    int i54 = i12 - 1;
                    if (rVar.H(0, i54, i11, i12)) {
                        i53 |= 1;
                    }
                    int i55 = i53 << 1;
                    if (rVar.H(1, i54, i11, i12)) {
                        i55 |= 1;
                    }
                    int i56 = i55 << 1;
                    if (rVar.H(2, i54, i11, i12)) {
                        i56 |= 1;
                    }
                    int i57 = i56 << 1;
                    if (rVar.H(3, i54, i11, i12)) {
                        i57 |= 1;
                    }
                    bArr[i15] = (byte) i57;
                    i16 -= 2;
                    i14 += 2;
                    i15 = i49;
                    z8 = true;
                } else {
                    while (true) {
                        if (i16 < i11 && i14 >= 0 && !bVar2.b(i14, i16)) {
                            bArr[i15] = (byte) rVar.I(i16, i14, i11, i12);
                            i15++;
                        }
                        int i58 = i16 - 2;
                        int i59 = i14 + 2;
                        if (i58 < 0 || i59 >= i12) {
                            break;
                        }
                        i16 = i58;
                        i14 = i59;
                    }
                    int i60 = i16 - 1;
                    int i61 = i14 + 5;
                    while (true) {
                        if (i60 >= 0 && i61 < i12 && !bVar2.b(i61, i60)) {
                            bArr[i15] = (byte) rVar.I(i60, i61, i11, i12);
                            i15++;
                        }
                        int i62 = i60 + 2;
                        int i63 = i61 - 2;
                        if (i62 >= i11 || i63 < 0) {
                            break;
                        }
                        i60 = i62;
                        i61 = i63;
                    }
                    i16 = i60 + 5;
                    i14 = i61 - 1;
                }
            }
            if (i16 >= i11 && i14 >= i12) {
                break;
            }
            i13 = 0;
            bArr2 = bArr;
        }
        if (i15 != cVar.f17400g) {
            throw jj.d.a();
        }
        a0 a0Var = cVar.f17399f;
        c5.e[] eVarArr = (c5.e[]) a0Var.f125i;
        int i64 = a0Var.f124e;
        int i65 = 0;
        for (c5.e eVar : eVarArr) {
            i65 += eVar.f3328b;
        }
        ek.a[] aVarArr = new ek.a[i65];
        int i66 = 0;
        for (c5.e eVar2 : eVarArr) {
            int i67 = 0;
            while (i67 < eVar2.f3328b) {
                int i68 = eVar2.f3329c;
                aVarArr[i66] = new ek.a(new byte[i64 + i68], i68);
                i67++;
                i66++;
            }
        }
        int length = aVarArr[0].f8136b.length - i64;
        int i69 = length - 1;
        int i70 = 0;
        for (int i71 = 0; i71 < i69; i71++) {
            int i72 = 0;
            while (i72 < i66) {
                aVarArr[i72].f8136b[i71] = bArr[i70];
                i72++;
                i70++;
            }
        }
        boolean z10 = cVar.a == 24;
        int i73 = 8;
        int i74 = z10 ? 8 : i66;
        int i75 = 0;
        while (i75 < i74) {
            aVarArr[i75].f8136b[i69] = bArr[i70];
            i75++;
            i70++;
        }
        int length2 = aVarArr[0].f8136b.length;
        while (true) {
            i5 = 7;
            if (length >= length2) {
                break;
            }
            int i76 = 0;
            while (i76 < i66) {
                int i77 = z10 ? (i76 + 8) % i66 : i76;
                aVarArr[i77].f8136b[(!z10 || i77 <= 7) ? length : length - 1] = bArr[i70];
                i76++;
                i70++;
            }
            length++;
        }
        if (i70 != i10) {
            throw new IllegalArgumentException();
        }
        int i78 = 0;
        for (int i79 = 0; i79 < i65; i79++) {
            i78 += aVarArr[i79].a;
        }
        byte[] bArr3 = new byte[i78];
        for (int i80 = 0; i80 < i65; i80++) {
            ek.a aVar = aVarArr[i80];
            byte[] bArr4 = aVar.f8136b;
            int i81 = aVar.a;
            int length3 = bArr4.length;
            int[] iArr = new int[length3];
            for (int i82 = 0; i82 < length3; i82++) {
                iArr[i82] = bArr4[i82] & 255;
            }
            try {
                ((gj.c) this.f17393d).z(bArr4.length - i81, iArr);
                for (int i83 = 0; i83 < i81; i83++) {
                    bArr4[i83] = (byte) iArr[i83];
                }
                for (int i84 = 0; i84 < i81; i84++) {
                    bArr3[(i84 * i65) + i80] = bArr4[i84];
                }
            } catch (pj.b unused) {
                throw jj.b.a();
            }
        }
        a5.g gVar = new a5.g(bArr3);
        StringBuilder sb2 = new StringBuilder(100);
        StringBuilder sb3 = new StringBuilder(0);
        ArrayList arrayList = new ArrayList(1);
        int i85 = 2;
        while (true) {
            int i86 = 6;
            if (i85 == 2) {
                boolean z11 = false;
                while (true) {
                    int g12 = gVar.g(i73);
                    if (g12 == 0) {
                        throw jj.d.a();
                    }
                    if (g12 <= 128) {
                        if (z11) {
                            g12 += IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        }
                        sb2.append((char) (g12 - 1));
                        i86 = 2;
                    } else if (g12 == 129) {
                        i86 = 1;
                    } else {
                        if (g12 > 229) {
                            switch (g12) {
                                case 230:
                                    i86 = 3;
                                    break;
                                case 231:
                                    i86 = i5;
                                    break;
                                case 232:
                                    sb2.append((char) 29);
                                    if (gVar.d() <= 0) {
                                        i86 = 2;
                                        break;
                                    }
                                case 233:
                                case 234:
                                case 241:
                                    break;
                                case 235:
                                    z11 = true;
                                    if (gVar.d() <= 0) {
                                    }
                                    break;
                                case 236:
                                    sb2.append("[)>\u001e05\u001d");
                                    sb3.insert(0, "\u001e\u0004");
                                    if (gVar.d() <= 0) {
                                    }
                                    break;
                                case 237:
                                    sb2.append("[)>\u001e06\u001d");
                                    sb3.insert(0, "\u001e\u0004");
                                    if (gVar.d() <= 0) {
                                    }
                                    break;
                                case 238:
                                    i86 = 5;
                                    break;
                                case 239:
                                    i86 = 4;
                                    break;
                                case 240:
                                    break;
                                default:
                                    if (g12 != 254 || gVar.d() != 0) {
                                    }
                                    break;
                            }
                        } else {
                            int i87 = g12 - 130;
                            if (i87 < 10) {
                                sb2.append('0');
                            }
                            sb2.append(i87);
                        }
                        if (gVar.d() <= 0) {
                        }
                    }
                }
                i85 = i86;
            } else {
                int b10 = f0.e.b(i85);
                if (b10 == 2) {
                    int i88 = 3;
                    int[] iArr2 = new int[3];
                    boolean z12 = false;
                    int i89 = 0;
                    while (gVar.d() != 8 && (g6 = gVar.g(8)) != 254) {
                        a.a(g6, gVar.g(8), iArr2);
                        int i90 = i89;
                        boolean z13 = z12;
                        int i91 = 0;
                        while (i91 < i88) {
                            int i92 = iArr2[i91];
                            if (i90 != 0) {
                                if (i90 != 1) {
                                    if (i90 == 2) {
                                        if (i92 < 27) {
                                            char c6 = a.f17389b[i92];
                                            if (z13) {
                                                sb2.append((char) (c6 + 128));
                                                z13 = false;
                                            } else {
                                                sb2.append(c6);
                                            }
                                        } else if (i92 == 27) {
                                            sb2.append((char) 29);
                                        } else {
                                            if (i92 != 30) {
                                                throw jj.d.a();
                                            }
                                            z13 = true;
                                        }
                                        i90 = 0;
                                    } else {
                                        if (i90 != i88) {
                                            throw jj.d.a();
                                        }
                                        if (z13) {
                                            sb2.append((char) (i92 + 224));
                                            z13 = false;
                                            i90 = 0;
                                        } else {
                                            sb2.append((char) (i92 + 96));
                                            i90 = 0;
                                        }
                                    }
                                } else if (z13) {
                                    sb2.append((char) (i92 + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT));
                                    z13 = false;
                                    i90 = 0;
                                } else {
                                    sb2.append((char) i92);
                                    i90 = 0;
                                }
                            } else if (i92 < i88) {
                                i90 = i92 + 1;
                            } else {
                                if (i92 >= 40) {
                                    throw jj.d.a();
                                }
                                char c8 = a.a[i92];
                                if (z13) {
                                    sb2.append((char) (c8 + 128));
                                    z13 = false;
                                } else {
                                    sb2.append(c8);
                                }
                            }
                            i91++;
                            i88 = 3;
                        }
                        i6 = 2;
                        if (gVar.d() <= 0) {
                            i85 = i6;
                        } else {
                            z12 = z13;
                            i89 = i90;
                            i88 = 3;
                        }
                    }
                } else if (b10 == 3) {
                    int i93 = 3;
                    int[] iArr3 = new int[3];
                    boolean z14 = false;
                    int i94 = 0;
                    for (int i95 = 254; gVar.d() != i73 && (g10 = gVar.g(i73)) != i95; i95 = 254) {
                        a.a(g10, gVar.g(i73), iArr3);
                        int i96 = i94;
                        int i97 = 0;
                        while (i97 < i93) {
                            int i98 = iArr3[i97];
                            if (i96 != 0) {
                                if (i96 != 1) {
                                    if (i96 == 2) {
                                        if (i98 < 27) {
                                            char c10 = a.f17391d[i98];
                                            if (z14) {
                                                sb2.append((char) (c10 + 128));
                                                z14 = false;
                                            } else {
                                                sb2.append(c10);
                                            }
                                        } else if (i98 == 27) {
                                            sb2.append((char) 29);
                                        } else {
                                            if (i98 != 30) {
                                                throw jj.d.a();
                                            }
                                            z14 = true;
                                        }
                                        i96 = 0;
                                    } else {
                                        if (i96 != i93) {
                                            throw jj.d.a();
                                        }
                                        if (i98 >= 32) {
                                            throw jj.d.a();
                                        }
                                        char c11 = a.f17392e[i98];
                                        if (z14) {
                                            sb2.append((char) (c11 + 128));
                                            z14 = false;
                                            i96 = 0;
                                        } else {
                                            sb2.append(c11);
                                            i96 = 0;
                                        }
                                    }
                                } else if (z14) {
                                    sb2.append((char) (i98 + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT));
                                    z14 = false;
                                    i96 = 0;
                                } else {
                                    sb2.append((char) i98);
                                    i96 = 0;
                                }
                            } else if (i98 < i93) {
                                i96 = i98 + 1;
                            } else {
                                if (i98 >= 40) {
                                    throw jj.d.a();
                                }
                                char c12 = a.f17390c[i98];
                                if (z14) {
                                    sb2.append((char) (c12 + 128));
                                    z14 = false;
                                } else {
                                    sb2.append(c12);
                                }
                            }
                            i97++;
                            i93 = 3;
                        }
                        if (gVar.d() > 0) {
                            i94 = i96;
                            i73 = 8;
                            i93 = 3;
                        }
                    }
                } else if (b10 == 4) {
                    int i99 = 3;
                    int[] iArr4 = new int[3];
                    while (gVar.d() != i73 && (g11 = gVar.g(i73)) != 254) {
                        a.a(g11, gVar.g(i73), iArr4);
                        int i100 = 0;
                        while (i100 < i99) {
                            int i101 = iArr4[i100];
                            if (i101 == 0) {
                                sb2.append('\r');
                            } else if (i101 == 1) {
                                sb2.append('*');
                            } else if (i101 == 2) {
                                sb2.append('>');
                            } else if (i101 == i99) {
                                sb2.append(' ');
                            } else if (i101 < 14) {
                                sb2.append((char) (i101 + 44));
                            } else {
                                if (i101 >= 40) {
                                    throw jj.d.a();
                                }
                                sb2.append((char) (i101 + 51));
                            }
                            i100++;
                            i99 = 3;
                        }
                        if (gVar.d() > 0) {
                            i99 = 3;
                        }
                    }
                } else if (b10 == 5) {
                    while (true) {
                        if (gVar.d() > 16) {
                            int i102 = 0;
                            while (true) {
                                if (i102 < 4) {
                                    int g13 = gVar.g(6);
                                    if (g13 == 31) {
                                        int i103 = 8 - gVar.f156e;
                                        if (i103 != i73) {
                                            gVar.g(i103);
                                        }
                                    } else {
                                        if ((g13 & 32) == 0) {
                                            g13 |= 64;
                                        }
                                        sb2.append((char) g13);
                                        i102++;
                                    }
                                } else if (gVar.d() <= 0) {
                                }
                            }
                        }
                    }
                } else {
                    if (b10 != 6) {
                        throw jj.d.a();
                    }
                    int i104 = gVar.f155d;
                    int i105 = i104 + 2;
                    int b11 = a.b(gVar.g(i73), i104 + 1);
                    if (b11 == 0) {
                        b11 = gVar.d() / 8;
                    } else if (b11 >= 250) {
                        b11 = ((b11 - 249) * h0.DEFAULT_SWIPE_ANIMATION_DURATION) + a.b(gVar.g(i73), i105);
                        i105 = i104 + 3;
                    }
                    if (b11 < 0) {
                        throw jj.d.a();
                    }
                    byte[] bArr5 = new byte[b11];
                    int i106 = 0;
                    while (i106 < b11) {
                        if (gVar.d() < i73) {
                            throw jj.d.a();
                        }
                        bArr5[i106] = (byte) a.b(gVar.g(i73), i105);
                        i106++;
                        i105++;
                    }
                    arrayList.add(bArr5);
                    try {
                        sb2.append(new String(bArr5, "ISO8859_1"));
                    } catch (UnsupportedEncodingException e9) {
                        throw new IllegalStateException("Platform does not support required encoding: ".concat(String.valueOf(e9)));
                    }
                }
                i6 = 2;
                i85 = i6;
            }
            if (i85 != 1 && gVar.d() > 0) {
                i73 = 8;
                i5 = 7;
            }
        }
    }

    public void j() {
        sd.n nVar = (sd.n) this.f17393d;
        int i5 = nVar.O - 1;
        nVar.O = i5;
        if (i5 > 0) {
            return;
        }
        int i6 = 0;
        for (t tVar : nVar.Q) {
            tVar.f();
            i6 += tVar.f17920f0.f15065d;
        }
        z0[] z0VarArr = new z0[i6];
        int i10 = 0;
        for (t tVar2 : nVar.Q) {
            tVar2.f();
            int i11 = tVar2.f17920f0.f15065d;
            int i12 = 0;
            while (i12 < i11) {
                tVar2.f();
                z0VarArr[i10] = tVar2.f17920f0.a(i12);
                i12++;
                i10++;
            }
        }
        nVar.P = new a1(z0VarArr);
        nVar.N.d(nVar);
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        ((m) this.f17393d).f();
    }

    public b(int i5) {
        switch (i5) {
            case 4:
                try {
                    this.f17393d = XmlPullParserFactory.newInstance();
                    return;
                } catch (XmlPullParserException e9) {
                    throw new RuntimeException("Couldn't create XmlPullParserFactory instance", e9);
                }
            default:
                this.f17393d = new gj.c(26, pj.a.f16401m);
                return;
        }
    }
}
