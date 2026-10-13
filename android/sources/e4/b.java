package e4;

import android.os.Build;
import androidx.work.impl.WorkDatabase;
import java.io.ByteArrayOutputStream;
import java.io.ObjectOutputStream;
import java.util.Set;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import v3.x;

/* loaded from: classes.dex */
public final class b extends a3.r {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7937e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(WorkDatabase workDatabase, boolean z5, int i5) {
        super(workDatabase);
        this.f7937e = i5;
    }

    @Override // a3.r
    public final String c() {
        switch (this.f7937e) {
            case 0:
                return "INSERT OR IGNORE INTO `Dependency` (`work_spec_id`,`prerequisite_id`) VALUES (?,?)";
            case 1:
                return "INSERT OR REPLACE INTO `Preference` (`key`,`long_value`) VALUES (?,?)";
            case 2:
                return "INSERT OR REPLACE INTO `SystemIdInfo` (`work_spec_id`,`generation`,`system_id`) VALUES (?,?,?)";
            case 3:
                return "INSERT OR IGNORE INTO `WorkName` (`name`,`work_spec_id`) VALUES (?,?)";
            case 4:
                return "INSERT OR REPLACE INTO `WorkProgress` (`work_spec_id`,`progress`) VALUES (?,?)";
            case 5:
                return "INSERT OR IGNORE INTO `WorkSpec` (`id`,`state`,`worker_class_name`,`input_merger_class_name`,`input`,`output`,`initial_delay`,`interval_duration`,`flex_duration`,`run_attempt_count`,`backoff_policy`,`backoff_delay_duration`,`last_enqueue_time`,`minimum_retention_duration`,`schedule_requested_at`,`run_in_foreground`,`out_of_quota_policy`,`period_count`,`generation`,`next_schedule_time_override`,`next_schedule_time_override_generation`,`stop_reason`,`required_network_type`,`requires_charging`,`requires_device_idle`,`requires_battery_not_low`,`requires_storage_not_low`,`trigger_content_update_delay`,`trigger_max_content_delay`,`content_uri_triggers`) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
            default:
                return "INSERT OR IGNORE INTO `WorkTag` (`tag`,`work_spec_id`) VALUES (?,?)";
        }
    }

    public final void f(h3.j jVar, Object obj) {
        int i5;
        int i6;
        byte[] byteArray;
        int i10 = 3;
        switch (this.f7937e) {
            case 0:
                a aVar = (a) obj;
                String str = aVar.a;
                if (str == null) {
                    jVar.S(1);
                } else {
                    jVar.n(1, str);
                }
                String str2 = aVar.f7936b;
                if (str2 == null) {
                    jVar.S(2);
                    return;
                } else {
                    jVar.n(2, str2);
                    return;
                }
            case 1:
                d dVar = (d) obj;
                jVar.n(1, dVar.a);
                jVar.z(2, dVar.f7941b.longValue());
                return;
            case 2:
                String str3 = ((g) obj).a;
                if (str3 == null) {
                    jVar.S(1);
                } else {
                    jVar.n(1, str3);
                }
                jVar.z(2, r2.f7949b);
                jVar.z(3, r2.f7950c);
                return;
            case 3:
                k kVar = (k) obj;
                String str4 = kVar.a;
                if (str4 == null) {
                    jVar.S(1);
                } else {
                    jVar.n(1, str4);
                }
                String str5 = kVar.f7957b;
                if (str5 == null) {
                    jVar.S(2);
                    return;
                } else {
                    jVar.n(2, str5);
                    return;
                }
            case 4:
                throw new ClassCastException();
            case 5:
                o oVar = (o) obj;
                String str6 = oVar.a;
                if (str6 == null) {
                    jVar.S(1);
                } else {
                    jVar.n(1, str6);
                }
                jVar.z(2, nf.e.C(oVar.f7967b));
                String str7 = oVar.f7968c;
                if (str7 == null) {
                    jVar.S(3);
                } else {
                    jVar.n(3, str7);
                }
                String str8 = oVar.f7969d;
                if (str8 == null) {
                    jVar.S(4);
                } else {
                    jVar.n(4, str8);
                }
                byte[] b10 = v3.f.b(oVar.f7970e);
                if (b10 == null) {
                    jVar.S(5);
                } else {
                    jVar.F(b10, 5);
                }
                byte[] b11 = v3.f.b(oVar.f7971f);
                if (b11 == null) {
                    jVar.S(6);
                } else {
                    jVar.F(b11, 6);
                }
                jVar.z(7, oVar.f7972g);
                jVar.z(8, oVar.f7973h);
                jVar.z(9, oVar.f7974i);
                jVar.z(10, oVar.k);
                v3.a backoffPolicy = oVar.f7975l;
                Intrinsics.checkNotNullParameter(backoffPolicy, "backoffPolicy");
                int ordinal = backoffPolicy.ordinal();
                if (ordinal == 0) {
                    i5 = 0;
                } else {
                    if (ordinal != 1) {
                        throw new fo.n();
                    }
                    i5 = 1;
                }
                jVar.z(11, i5);
                jVar.z(12, oVar.f7976m);
                jVar.z(13, oVar.f7977n);
                jVar.z(14, oVar.f7978o);
                jVar.z(15, oVar.f7979p);
                jVar.z(16, oVar.f7980q ? 1L : 0L);
                x policy = oVar.f7981r;
                Intrinsics.checkNotNullParameter(policy, "policy");
                int ordinal2 = policy.ordinal();
                if (ordinal2 == 0) {
                    i6 = 0;
                } else {
                    if (ordinal2 != 1) {
                        throw new fo.n();
                    }
                    i6 = 1;
                }
                jVar.z(17, i6);
                jVar.z(18, oVar.f7982s);
                jVar.z(19, oVar.f7983t);
                jVar.z(20, oVar.f7984u);
                jVar.z(21, oVar.f7985v);
                jVar.z(22, oVar.f7986w);
                v3.e eVar = oVar.j;
                if (eVar == null) {
                    jVar.S(23);
                    jVar.S(24);
                    jVar.S(25);
                    jVar.S(26);
                    jVar.S(27);
                    jVar.S(28);
                    jVar.S(29);
                    jVar.S(30);
                    return;
                }
                v3.q networkType = eVar.a;
                Intrinsics.checkNotNullParameter(networkType, "networkType");
                int ordinal3 = networkType.ordinal();
                if (ordinal3 == 0) {
                    i10 = 0;
                } else if (ordinal3 == 1) {
                    i10 = 1;
                } else if (ordinal3 == 2) {
                    i10 = 2;
                } else if (ordinal3 != 3) {
                    if (ordinal3 == 4) {
                        i10 = 4;
                    } else {
                        if (Build.VERSION.SDK_INT < 30 || networkType != v3.q.f19217x) {
                            throw new IllegalArgumentException("Could not convert " + networkType + " to int");
                        }
                        i10 = 5;
                    }
                }
                jVar.z(23, i10);
                jVar.z(24, eVar.f19194b ? 1L : 0L);
                jVar.z(25, eVar.f19195c ? 1L : 0L);
                jVar.z(26, eVar.f19196d ? 1L : 0L);
                jVar.z(27, eVar.f19197e ? 1L : 0L);
                jVar.z(28, eVar.f19198f);
                jVar.z(29, eVar.f19199g);
                Set<v3.d> triggers = eVar.f19200h;
                Intrinsics.checkNotNullParameter(triggers, "triggers");
                if (triggers.isEmpty()) {
                    byteArray = new byte[0];
                } else {
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        ObjectOutputStream objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
                        try {
                            objectOutputStream.writeInt(triggers.size());
                            for (v3.d dVar2 : triggers) {
                                objectOutputStream.writeUTF(dVar2.a.toString());
                                objectOutputStream.writeBoolean(dVar2.f19192b);
                            }
                            Unit unit = Unit.a;
                            objectOutputStream.close();
                            byteArrayOutputStream.close();
                            byteArray = byteArrayOutputStream.toByteArray();
                            Intrinsics.checkNotNullExpressionValue(byteArray, "outputStream.toByteArray()");
                        } finally {
                        }
                    } catch (Throwable th2) {
                        try {
                            throw th2;
                        } catch (Throwable th3) {
                            com.facebook.imagepipeline.nativecode.c.j(byteArrayOutputStream, th2);
                            throw th3;
                        }
                    }
                }
                if (byteArray == null) {
                    jVar.S(30);
                    return;
                } else {
                    jVar.F(byteArray, 30);
                    return;
                }
            default:
                q qVar = (q) obj;
                String str9 = qVar.a;
                if (str9 == null) {
                    jVar.S(1);
                } else {
                    jVar.n(1, str9);
                }
                String str10 = qVar.f7998b;
                if (str10 == null) {
                    jVar.S(2);
                    return;
                } else {
                    jVar.n(2, str10);
                    return;
                }
        }
    }

    public final void g(Object obj) {
        h3.j a = a();
        try {
            f(a, obj);
            a.f9513e.executeInsert();
        } finally {
            e(a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(WorkDatabase database) {
        super(database);
        this.f7937e = 1;
        Intrinsics.checkNotNullParameter(database, "database");
    }
}
