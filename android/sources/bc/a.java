package bc;

import a5.k0;
import af.s;
import android.app.Activity;
import android.content.ContentValues;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.CancellationSignal;
import android.util.Base64;
import android.util.Log;
import androidx.appcompat.widget.b4;
import androidx.appcompat.widget.w;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import com.discord.crash_reporting.CrashReporting;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.modal.ReactModalHostManager;
import com.facebook.react.views.modal.ReactModalHostView;
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.messaging.r;
import com.google.firebase.messaging.t;
import dc.h;
import io.sentry.Hint;
import io.sentry.IScope;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.android.core.ActivityLifecycleIntegration;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.d6;
import io.sentry.f1;
import io.sentry.f6;
import io.sentry.g6;
import io.sentry.h6;
import io.sentry.j6;
import io.sentry.k;
import io.sentry.n3;
import io.sentry.o3;
import io.sentry.protocol.p;
import io.sentry.protocol.v;
import io.sentry.r3;
import io.sentry.v5;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicReference;
import jg.f;
import kotlin.jvm.internal.Intrinsics;
import o1.j;
import o1.m;
import o1.o;
import wb.i;
import wb.l;
import zb.d;
import zb.e;
import zb.g;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements ec.b, r3, ReactModalHostView.OnRequestCloseListener, f, dc.f, n3, j6, o3, jg.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2768d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2769e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2770i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f2771v;

    public /* synthetic */ a(h hVar, Object obj, i iVar, int i5) {
        this.f2768d = i5;
        this.f2769e = hVar;
        this.f2771v = obj;
        this.f2770i = iVar;
    }

    @Override // io.sentry.n3
    public void a(g6 g6Var) {
        ConcurrentHashMap concurrentHashMap;
        s sVar = (s) this.f2769e;
        SentryEvent sentryEvent = (SentryEvent) this.f2770i;
        Hint hint = (Hint) this.f2771v;
        if (g6Var == null) {
            ((v5) sVar.f594b).getLogger().u(SentryLevel.INFO, "Session is null on scope.withSession", new Object[0]);
            return;
        }
        String str = null;
        f6 f6Var = sentryEvent.e() != null ? f6.Crashed : null;
        boolean z5 = f6.Crashed == f6Var || sentryEvent.f();
        p pVar = sentryEvent.f11546v;
        String str2 = (pVar == null || (concurrentHashMap = pVar.f11858x) == null || !concurrentHashMap.containsKey("user-agent")) ? null : (String) sentryEvent.f11546v.f11858x.get("user-agent");
        Object b10 = hint.b("sentry:typeCheckHint");
        if (b10 instanceof io.sentry.hints.a) {
            str = ((io.sentry.hints.a) b10).c();
            f6Var = f6.Abnormal;
        }
        if (!g6Var.d(f6Var, str2, z5, str) || g6Var.f11573y == f6.Ok) {
            return;
        }
        g6Var.b(ki.b.r());
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x007f A[SYNTHETIC] */
    @Override // dc.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Object apply(Object obj) {
        long insert;
        Cursor cursor;
        zb.c cVar;
        int i5 = this.f2768d;
        int i6 = 5;
        int i10 = 4;
        int i11 = 3;
        zb.c cVar2 = zb.c.CACHE_FULL;
        int i12 = 2;
        int i13 = 1;
        Object obj2 = this.f2771v;
        Object obj3 = this.f2770i;
        int i14 = 0;
        h hVar = (h) this.f2769e;
        switch (i5) {
            case 4:
                wb.h hVar2 = (wb.h) obj2;
                l lVar = hVar2.f19700c;
                String str = hVar2.a;
                i iVar = (i) obj3;
                SQLiteDatabase sQLiteDatabase = (SQLiteDatabase) obj;
                long simpleQueryForLong = hVar.c().compileStatement("PRAGMA page_size").simpleQueryForLong() * hVar.c().compileStatement("PRAGMA page_count").simpleQueryForLong();
                dc.a aVar = hVar.f7480v;
                if (simpleQueryForLong >= aVar.a) {
                    hVar.l(1L, cVar2, str);
                    return -1L;
                }
                Long f2 = h.f(sQLiteDatabase, iVar);
                if (f2 != null) {
                    insert = f2.longValue();
                } else {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("backend_name", iVar.a);
                    contentValues.put("priority", Integer.valueOf(gc.a.a(iVar.f19705c)));
                    contentValues.put("next_request_ms", (Integer) 0);
                    byte[] bArr = iVar.f19704b;
                    if (bArr != null) {
                        contentValues.put("extras", Base64.encodeToString(bArr, 0));
                    }
                    insert = sQLiteDatabase.insert("transport_contexts", null, contentValues);
                }
                int i15 = aVar.f7470e;
                byte[] bArr2 = lVar.f19713b;
                boolean z5 = bArr2.length <= i15;
                ContentValues contentValues2 = new ContentValues();
                contentValues2.put("context_id", Long.valueOf(insert));
                contentValues2.put("transport_name", str);
                contentValues2.put("timestamp_ms", Long.valueOf(hVar2.f19701d));
                contentValues2.put("uptime_ms", Long.valueOf(hVar2.f19702e));
                contentValues2.put("payload_encoding", lVar.a.a);
                contentValues2.put("code", hVar2.f19699b);
                contentValues2.put("num_attempts", (Integer) 0);
                contentValues2.put("inline", Boolean.valueOf(z5));
                contentValues2.put("payload", z5 ? bArr2 : new byte[0]);
                long insert2 = sQLiteDatabase.insert("events", null, contentValues2);
                if (!z5) {
                    int ceil = (int) Math.ceil(bArr2.length / i15);
                    for (int i16 = 1; i16 <= ceil; i16++) {
                        byte[] copyOfRange = Arrays.copyOfRange(bArr2, (i16 - 1) * i15, Math.min(i16 * i15, bArr2.length));
                        ContentValues contentValues3 = new ContentValues();
                        contentValues3.put("event_id", Long.valueOf(insert2));
                        contentValues3.put("sequence_num", Integer.valueOf(i16));
                        contentValues3.put("bytes", copyOfRange);
                        sQLiteDatabase.insert("event_payloads", null, contentValues3);
                    }
                }
                for (Map.Entry entry : Collections.unmodifiableMap(hVar2.f19703f).entrySet()) {
                    ContentValues contentValues4 = new ContentValues();
                    contentValues4.put("event_id", Long.valueOf(insert2));
                    contentValues4.put(StackTraceHelper.NAME_KEY, (String) entry.getKey());
                    contentValues4.put("value", (String) entry.getValue());
                    sQLiteDatabase.insert("event_metadata", null, contentValues4);
                }
                return Long.valueOf(insert2);
            case 5:
                ArrayList arrayList = (ArrayList) obj2;
                i iVar2 = (i) obj3;
                Cursor cursor2 = (Cursor) obj;
                while (cursor2.moveToNext()) {
                    long j = cursor2.getLong(0);
                    int i17 = cursor2.getInt(7) != 0 ? i13 : 0;
                    w wVar = new w();
                    wVar.f1146x = new HashMap();
                    String string = cursor2.getString(i13);
                    if (string == null) {
                        throw new NullPointerException("Null transportName");
                    }
                    wVar.f1141d = string;
                    wVar.f1144v = Long.valueOf(cursor2.getLong(i12));
                    wVar.f1145w = Long.valueOf(cursor2.getLong(3));
                    if (i17 != 0) {
                        String string2 = cursor2.getString(4);
                        wVar.f1143i = new l(string2 == null ? h.f7476x : new tb.c(string2), cursor2.getBlob(5));
                    } else {
                        String string3 = cursor2.getString(4);
                        tb.c cVar3 = string3 == null ? h.f7476x : new tb.c(string3);
                        Cursor query = hVar.c().query("event_payloads", new String[]{"bytes"}, "event_id = ?", new String[]{String.valueOf(j)}, null, null, "sequence_num");
                        try {
                            ArrayList arrayList2 = new ArrayList();
                            int i18 = 0;
                            while (query.moveToNext()) {
                                byte[] blob = query.getBlob(0);
                                arrayList2.add(blob);
                                i18 += blob.length;
                            }
                            byte[] bArr3 = new byte[i18];
                            int i19 = 0;
                            int i20 = 0;
                            while (i19 < arrayList2.size()) {
                                byte[] bArr4 = (byte[]) arrayList2.get(i19);
                                cursor = query;
                                try {
                                    ArrayList arrayList3 = arrayList2;
                                    System.arraycopy(bArr4, 0, bArr3, i20, bArr4.length);
                                    i20 += bArr4.length;
                                    i19++;
                                    query = cursor;
                                    arrayList2 = arrayList3;
                                } catch (Throwable th2) {
                                    th = th2;
                                    cursor.close();
                                    throw th;
                                }
                            }
                            query.close();
                            wVar.f1143i = new l(cVar3, bArr3);
                        } catch (Throwable th3) {
                            th = th3;
                            cursor = query;
                        }
                    }
                    if (!cursor2.isNull(6)) {
                        wVar.f1142e = Integer.valueOf(cursor2.getInt(6));
                    }
                    arrayList.add(new dc.b(j, iVar2, wVar.p()));
                    i12 = 2;
                    i13 = 1;
                }
                return null;
            default:
                HashMap hashMap = (HashMap) obj3;
                r rVar = (r) obj2;
                ArrayList arrayList4 = (ArrayList) rVar.f6261v;
                Cursor cursor3 = (Cursor) obj;
                hVar.getClass();
                while (cursor3.moveToNext()) {
                    String string4 = cursor3.getString(i14);
                    int i21 = cursor3.getInt(1);
                    zb.c cVar4 = zb.c.REASON_UNKNOWN;
                    if (i21 != 0) {
                        if (i21 == 1) {
                            cVar4 = zb.c.MESSAGE_TOO_OLD;
                        } else if (i21 == 2) {
                            cVar = cVar2;
                            long j5 = cursor3.getLong(2);
                            if (hashMap.containsKey(string4)) {
                                hashMap.put(string4, new ArrayList());
                            }
                            ((List) hashMap.get(string4)).add(new d(j5, cVar));
                            i14 = 0;
                            i6 = 5;
                            i10 = 4;
                            i11 = 3;
                        } else if (i21 == i11) {
                            cVar4 = zb.c.PAYLOAD_TOO_BIG;
                        } else if (i21 == i10) {
                            cVar4 = zb.c.MAX_RETRIES_REACHED;
                        } else if (i21 == i6) {
                            cVar4 = zb.c.INVALID_PAYLOD;
                        } else if (i21 == 6) {
                            cVar4 = zb.c.SERVER_ERROR;
                        } else {
                            io.sentry.config.a.k(Integer.valueOf(i21), "SQLiteEventStore", "%n is not valid. No matched LogEventDropped-Reason found. Treated it as REASON_UNKNOWN");
                        }
                    }
                    cVar = cVar4;
                    long j52 = cursor3.getLong(2);
                    if (hashMap.containsKey(string4)) {
                    }
                    ((List) hashMap.get(string4)).add(new d(j52, cVar));
                    i14 = 0;
                    i6 = 5;
                    i10 = 4;
                    i11 = 3;
                }
                for (Map.Entry entry2 : hashMap.entrySet()) {
                    int i22 = e.f21146c;
                    new ArrayList();
                    arrayList4.add(new e((String) entry2.getKey(), Collections.unmodifiableList((List) entry2.getValue())));
                }
                long e9 = hVar.f7478e.e();
                SQLiteDatabase c6 = hVar.c();
                c6.beginTransaction();
                try {
                    Cursor rawQuery = c6.rawQuery("SELECT last_metrics_upload_ms FROM global_log_event_state LIMIT 1", new String[0]);
                    try {
                        rawQuery.moveToNext();
                        g gVar = new g(rawQuery.getLong(0), e9);
                        rawQuery.close();
                        c6.setTransactionSuccessful();
                        c6.endTransaction();
                        rVar.f6260i = gVar;
                        rVar.f6262w = new zb.b(new zb.f(hVar.c().compileStatement("PRAGMA page_size").simpleQueryForLong() * hVar.c().compileStatement("PRAGMA page_count").simpleQueryForLong(), dc.a.f7466f.a));
                        rVar.f6259e = (String) hVar.f7481w.get();
                        return new zb.a((g) rVar.f6260i, Collections.unmodifiableList(arrayList4), (zb.b) rVar.f6262w, (String) rVar.f6259e);
                    } catch (Throwable th4) {
                        rawQuery.close();
                        throw th4;
                    }
                } catch (Throwable th5) {
                    c6.endTransaction();
                    throw th5;
                }
        }
    }

    @Override // io.sentry.o3
    public void b(f1 f1Var) {
        io.sentry.android.core.internal.gestures.f fVar = (io.sentry.android.core.internal.gestures.f) this.f2769e;
        IScope iScope = (IScope) this.f2770i;
        f1 f1Var2 = (f1) this.f2771v;
        if (f1Var == null) {
            iScope.O(f1Var2);
        } else {
            fVar.f11174i.getLogger().u(SentryLevel.DEBUG, "Transaction '%s' won't be bound to the Scope since there's one already in there.", f1Var2.getName());
        }
    }

    @Override // io.sentry.j6
    public void c(h6 h6Var) {
        io.sentry.android.core.c c6;
        d6 d6Var = (d6) this.f2769e;
        j6 j6Var = (j6) this.f2770i;
        AtomicReference atomicReference = (AtomicReference) this.f2771v;
        if (j6Var != null) {
            j6Var.c(h6Var);
        }
        io.sentry.android.core.e eVar = d6Var.f11524r.f11923i;
        if (eVar != null) {
            ActivityLifecycleIntegration activityLifecycleIntegration = (ActivityLifecycleIntegration) eVar.f11116d;
            WeakReference weakReference = (WeakReference) eVar.f11117e;
            String str = (String) eVar.f11118i;
            Activity activity = (Activity) weakReference.get();
            if (activity != null) {
                b4 b4Var = activityLifecycleIntegration.N;
                v vVar = d6Var.a;
                io.sentry.r a = ((io.sentry.util.a) b4Var.f932x).a();
                try {
                    if (b4Var.d()) {
                        io.sentry.android.core.c cVar = null;
                        b4Var.e(null, new io.sentry.android.core.b(b4Var, activity, 1));
                        io.sentry.android.core.c cVar2 = (io.sentry.android.core.c) ((WeakHashMap) b4Var.f930v).remove(activity);
                        if (cVar2 != null && (c6 = b4Var.c()) != null) {
                            cVar = new io.sentry.android.core.c(c6.a - cVar2.a, c6.f11103b - cVar2.f11103b, c6.f11104c - cVar2.f11104c);
                        }
                        if (cVar != null) {
                            int i5 = cVar.f11104c;
                            int i6 = cVar.f11103b;
                            int i10 = cVar.a;
                            if (i10 != 0 || i6 != 0 || i5 != 0) {
                                io.sentry.protocol.l lVar = new io.sentry.protocol.l(Integer.valueOf(i10), "none");
                                io.sentry.protocol.l lVar2 = new io.sentry.protocol.l(Integer.valueOf(i6), "none");
                                io.sentry.protocol.l lVar3 = new io.sentry.protocol.l(Integer.valueOf(i5), "none");
                                HashMap hashMap = new HashMap();
                                hashMap.put("frames_total", lVar);
                                hashMap.put("frames_slow", lVar2);
                                hashMap.put("frames_frozen", lVar3);
                                ((ConcurrentHashMap) b4Var.f929i).put(vVar, hashMap);
                            }
                        }
                    }
                    a.close();
                } catch (Throwable th2) {
                    try {
                        a.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            } else {
                SentryAndroidOptions sentryAndroidOptions = activityLifecycleIntegration.f11023v;
                if (sentryAndroidOptions != null) {
                    sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Unable to track activity frames as the Activity %s has been destroyed.", str);
                }
            }
        }
        k kVar = d6Var.f11523q;
        if (kVar != null) {
            atomicReference.set(kVar.f(d6Var));
        }
    }

    @Override // ec.b
    public Object execute() {
        b bVar = (b) this.f2769e;
        i iVar = (i) this.f2770i;
        wb.h hVar = (wb.h) this.f2771v;
        h hVar2 = (h) bVar.f2775d;
        hVar2.getClass();
        tb.d dVar = iVar.f19705c;
        String str = hVar.a;
        String str2 = iVar.a;
        String s2 = io.sentry.config.a.s("SQLiteEventStore");
        if (Log.isLoggable(s2, 3)) {
            Log.d(s2, "Storing event with priority=" + dVar + ", name=" + str + " for destination " + str2);
        }
        ((Long) hVar2.g(new a(hVar2, (Object) hVar, iVar, 4))).longValue();
        bVar.a.g0(iVar, 1, false);
        return null;
    }

    @Override // jg.f
    public jg.l g(Object obj) {
        FirebaseMessaging firebaseMessaging = (FirebaseMessaging) this.f2769e;
        String str = (String) this.f2770i;
        t tVar = (t) this.f2771v;
        String str2 = (String) obj;
        ha.l c6 = FirebaseMessaging.c(firebaseMessaging.f6191b);
        ki.g gVar = firebaseMessaging.a;
        gVar.a();
        String c8 = "[DEFAULT]".equals(gVar.f13382b) ? "" : gVar.c();
        String b10 = firebaseMessaging.f6197h.b();
        synchronized (c6) {
            String a = t.a(System.currentTimeMillis(), str2, b10);
            if (a != null) {
                SharedPreferences.Editor edit = ((SharedPreferences) c6.f9613d).edit();
                edit.putString(c8 + "|T|" + str + "|*", a);
                edit.commit();
            }
        }
        if (tVar == null || !str2.equals(tVar.a)) {
            ki.g gVar2 = firebaseMessaging.a;
            gVar2.a();
            if ("[DEFAULT]".equals(gVar2.f13382b)) {
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    StringBuilder sb2 = new StringBuilder("Invoking onNewToken for app: ");
                    gVar2.a();
                    sb2.append(gVar2.f13382b);
                    Log.d("FirebaseMessaging", sb2.toString());
                }
                Intent intent = new Intent("com.google.firebase.messaging.NEW_TOKEN");
                intent.putExtra("token", str2);
                new com.google.firebase.messaging.h(firebaseMessaging.f6191b).b(intent);
            }
        }
        return k0.s(str2);
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        CrashReporting.captureMessage$lambda$17((String) this.f2769e, (String) this.f2770i, (CrashReporting.ErrorLevel) this.f2771v, iScope);
    }

    @Override // jg.c
    public void onFailure(Exception e9) {
        o1.l oVar;
        CancellationSignal cancellationSignal = (CancellationSignal) this.f2769e;
        Executor executor = (Executor) this.f2770i;
        n1.h hVar = (n1.h) this.f2771v;
        Intrinsics.checkNotNullParameter(e9, "e");
        if (e9 instanceof ze.e) {
            int i5 = ((ze.e) e9).f21197d.f5657d;
            if (i5 == 16) {
                oVar = new j(e9.getMessage());
            } else if (t1.d.f18155b.contains(Integer.valueOf(i5))) {
                oVar = new m(e9.getMessage());
            } else {
                oVar = new o("Get digital credential failed, failure: " + e9);
            }
        } else {
            oVar = new o("Get digital credential failed, failure: " + e9);
        }
        t1.f onResultOrException = new t1.f(executor, hVar, oVar, 1);
        Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
        CredentialProviderPlayServicesImpl.Companion.getClass();
        if (s1.f.a(cancellationSignal)) {
            return;
        }
        onResultOrException.invoke();
    }

    @Override // com.facebook.react.views.modal.ReactModalHostView.OnRequestCloseListener
    public void onRequestClose(DialogInterface dialogInterface) {
        ReactModalHostManager.addEventEmitters$lambda$0((EventDispatcher) this.f2769e, (ThemedReactContext) this.f2770i, (ReactModalHostView) this.f2771v, dialogInterface);
    }

    public /* synthetic */ a(Object obj, Object obj2, Object obj3, int i5) {
        this.f2768d = i5;
        this.f2769e = obj;
        this.f2770i = obj2;
        this.f2771v = obj3;
    }

    public /* synthetic */ a(y1.a aVar, CancellationSignal cancellationSignal, Executor executor, n1.h hVar) {
        this.f2768d = 12;
        this.f2769e = cancellationSignal;
        this.f2770i = executor;
        this.f2771v = hVar;
    }
}
