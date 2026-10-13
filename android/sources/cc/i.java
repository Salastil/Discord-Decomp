package cc;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Point;
import android.os.Build;
import android.os.Trace;
import androidx.appcompat.widget.w;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout$OnRefreshListener;
import com.discord.appreview.AppRatingRequester;
import com.discord.client_info.ClientUserAgent;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.devsupport.inspector.TracingState;
import com.facebook.react.devsupport.inspector.TracingStateListener;
import com.facebook.react.devsupport.interfaces.PackagerStatusCallback;
import com.facebook.react.modules.network.OkHttpClientFactory;
import com.facebook.react.runtime.BridgelessAtomicRef;
import com.facebook.react.runtime.BridgelessReactContext;
import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.runtime.ReactHostInspectorTarget;
import com.facebook.react.runtime.internal.bolts.TaskCompletionSource;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;
import com.facebook.react.views.swiperefresh.SwipeRefreshLayoutManager;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.analytics.AnalyticsListener$Events;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.video.VideoSize;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.review.ReviewManager;
import com.google.firebase.FirebaseCommonRegistrar;
import com.google.firebase.messaging.EnhancedIntentService;
import fi.c0;
import fi.e0;
import fi.p;
import fi.q0;
import fi.r0;
import fi.y;
import ge.l;
import ge.n;
import ic.u;
import io.sentry.IScope;
import io.sentry.android.core.ActivityLifecycleIntegration;
import io.sentry.d6;
import io.sentry.f1;
import io.sentry.o3;
import io.sentry.q1;
import io.sentry.r3;
import io.sentry.util.m;
import io.sentry.w1;
import io.sentry.x1;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.Set;
import k2.r;
import ke.d0;
import nd.z0;
import okhttp3.OkHttpClient;

/* loaded from: classes3.dex */
public final /* synthetic */ class i implements ec.b, OnCompleteListener, OkHttpClientFactory, BridgelessAtomicRef.Provider, TracingStateListener, PackagerStatusCallback, SwipeRefreshLayout$OnRefreshListener, jg.a, dc.f, l, ni.e, ke.j, ke.k, q1, o3, r3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3391d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3392e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3393i;

    public /* synthetic */ i(int i5, Object obj, Object obj2) {
        this.f3391d = i5;
        this.f3392e = obj;
        this.f3393i = obj2;
    }

    @Override // jg.a
    public Object N(Task task) {
        com.google.firebase.messaging.h hVar = (com.google.firebase.messaging.h) this.f3392e;
        String str = (String) this.f3393i;
        synchronized (hVar) {
            ((s.e) hVar.f6240b).remove(str);
        }
        return task;
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00a2  */
    @Override // ge.l
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public r0 a(int i5, z0 z0Var, int[] iArr) {
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        Point point;
        int i14;
        int i15;
        Object[] objArr;
        z0 z0Var2 = z0Var;
        int i16 = this.f3391d;
        int i17 = 4;
        Object obj = this.f3393i;
        com.google.android.exoplayer2.trackselection.a aVar = (com.google.android.exoplayer2.trackselection.a) this.f3392e;
        switch (i16) {
            case 11:
                q0 q0Var = DefaultTrackSelector.k;
                int i18 = ((int[]) obj)[i5];
                int i19 = aVar.F;
                int i20 = aVar.G;
                boolean z5 = aVar.H;
                if (i19 == Integer.MAX_VALUE || i20 == Integer.MAX_VALUE) {
                    i6 = 4;
                    i10 = Integer.MAX_VALUE;
                } else {
                    i10 = Integer.MAX_VALUE;
                    int i21 = 0;
                    while (i21 < z0Var2.f15208d) {
                        Format format = z0Var2.f15211v[i21];
                        int i22 = format.N;
                        int i23 = format.O;
                        if (i22 > 0 && i23 > 0) {
                            if (z5) {
                                if ((i22 > i23) != (i19 > i20)) {
                                    i13 = i19;
                                    i12 = i20;
                                    int i24 = i22 * i13;
                                    int i25 = i23 * i12;
                                    point = i24 < i25 ? new Point(i12, d0.f(i25, i22)) : new Point(d0.f(i24, i23), i13);
                                    i14 = format.N;
                                    i15 = i14 * i23;
                                    if (i14 >= ((int) (point.x * 0.98f)) && i23 >= ((int) (point.y * 0.98f)) && i15 < i10) {
                                        i10 = i15;
                                    }
                                }
                            }
                            i12 = i19;
                            i13 = i20;
                            int i242 = i22 * i13;
                            int i252 = i23 * i12;
                            if (i242 < i252) {
                            }
                            i14 = format.N;
                            i15 = i14 * i23;
                            if (i14 >= ((int) (point.x * 0.98f))) {
                                i10 = i15;
                            }
                        }
                        i21++;
                        i17 = 4;
                    }
                    i6 = i17;
                }
                p.c(i6, "initialCapacity");
                Object[] objArr2 = new Object[i6];
                int i26 = 0;
                int i27 = 0;
                boolean z6 = false;
                while (i26 < z0Var2.f15208d) {
                    Format format2 = z0Var2.f15211v[i26];
                    int i28 = format2.N;
                    int i29 = (i28 == -1 || (i11 = format2.O) == -1) ? -1 : i28 * i11;
                    com.google.android.exoplayer2.trackselection.a aVar2 = aVar;
                    n nVar = new n(i5, z0Var2, i26, aVar2, iArr[i26], i18, i10 == Integer.MAX_VALUE || (i29 != -1 && i29 <= i10));
                    int i30 = i27 + 1;
                    if (objArr2.length < i30) {
                        objArr2 = Arrays.copyOf(objArr2, y.d(objArr2.length, i30));
                    } else if (z6) {
                        objArr2 = (Object[]) objArr2.clone();
                    } else {
                        objArr2[i27] = nVar;
                        i26++;
                        z0Var2 = z0Var;
                        i27++;
                        aVar = aVar2;
                    }
                    z6 = false;
                    objArr2[i27] = nVar;
                    i26++;
                    z0Var2 = z0Var;
                    i27++;
                    aVar = aVar2;
                }
                return e0.j(i27, objArr2);
            default:
                String str = (String) obj;
                q0 q0Var2 = DefaultTrackSelector.k;
                c0 c0Var = e0.f8656e;
                p.c(4, "initialCapacity");
                Object[] objArr3 = new Object[4];
                int i31 = 0;
                int i32 = 0;
                boolean z7 = false;
                while (i31 < z0Var2.f15208d) {
                    com.google.android.exoplayer2.trackselection.a aVar3 = aVar;
                    ge.k kVar = new ge.k(i5, z0Var2, i31, aVar3, iArr[i31], str);
                    int i33 = i32 + 1;
                    if (objArr3.length < i33) {
                        objArr = Arrays.copyOf(objArr3, y.d(objArr3.length, i33));
                    } else if (z7) {
                        objArr = (Object[]) objArr3.clone();
                    } else {
                        objArr3[i32] = kVar;
                        i31++;
                        i32++;
                        aVar = aVar3;
                    }
                    objArr3 = objArr;
                    z7 = false;
                    objArr3[i32] = kVar;
                    i31++;
                    i32++;
                    aVar = aVar3;
                }
                return e0.j(i32, objArr3);
        }
    }

    @Override // dc.f
    public Object apply(Object obj) {
        dc.h hVar = (dc.h) this.f3392e;
        wb.i iVar = (wb.i) this.f3393i;
        SQLiteDatabase sQLiteDatabase = (SQLiteDatabase) obj;
        dc.a aVar = hVar.f7480v;
        ArrayList i5 = hVar.i(sQLiteDatabase, iVar, aVar.f7467b);
        for (tb.d dVar : tb.d.values()) {
            if (dVar != iVar.f19705c) {
                int size = aVar.f7467b - i5.size();
                if (size <= 0) {
                    break;
                }
                r a = wb.i.a();
                a.K(iVar.a);
                if (dVar == null) {
                    throw new NullPointerException("Null priority");
                }
                a.f13144v = dVar;
                a.f13143i = iVar.f19704b;
                i5.addAll(hVar.i(sQLiteDatabase, a.k(), size));
            }
        }
        HashMap hashMap = new HashMap();
        StringBuilder sb2 = new StringBuilder("event_id IN (");
        for (int i6 = 0; i6 < i5.size(); i6++) {
            sb2.append(((dc.b) i5.get(i6)).a);
            if (i6 < i5.size() - 1) {
                sb2.append(',');
            }
        }
        sb2.append(')');
        Cursor query = sQLiteDatabase.query("event_metadata", new String[]{"event_id", StackTraceHelper.NAME_KEY, "value"}, sb2.toString(), null, null, null, null);
        while (query.moveToNext()) {
            try {
                long j = query.getLong(0);
                Set set = (Set) hashMap.get(Long.valueOf(j));
                if (set == null) {
                    set = new HashSet();
                    hashMap.put(Long.valueOf(j), set);
                }
                set.add(new dc.g(query.getString(1), query.getString(2)));
            } catch (Throwable th2) {
                query.close();
                throw th2;
            }
        }
        query.close();
        ListIterator listIterator = i5.listIterator();
        while (listIterator.hasNext()) {
            dc.b bVar = (dc.b) listIterator.next();
            long j5 = bVar.a;
            if (hashMap.containsKey(Long.valueOf(j5))) {
                w c6 = bVar.f7472c.c();
                for (dc.g gVar : (Set) hashMap.get(Long.valueOf(j5))) {
                    c6.h(gVar.a, gVar.f7475b);
                }
                listIterator.set(new dc.b(j5, bVar.f7471b, c6.p()));
            }
        }
        return i5;
    }

    @Override // io.sentry.o3
    public void b(f1 f1Var) {
        switch (this.f3391d) {
            case 26:
                d6 d6Var = (d6) this.f3392e;
                IScope iScope = (IScope) this.f3393i;
                d6Var.getClass();
                if (f1Var == d6Var) {
                    iScope.r();
                    break;
                }
                break;
            default:
                f1 f1Var2 = (f1) this.f3392e;
                IScope iScope2 = (IScope) this.f3393i;
                if (f1Var == f1Var2) {
                    iScope2.r();
                    break;
                }
                break;
        }
    }

    @Override // androidx.swiperefreshlayout.widget.SwipeRefreshLayout$OnRefreshListener
    public void c() {
        SwipeRefreshLayoutManager.addEventEmitters$lambda$0((ThemedReactContext) this.f3392e, (ReactSwipeRefreshLayout) this.f3393i);
    }

    @Override // com.facebook.react.modules.network.OkHttpClientFactory
    public OkHttpClient createNewNetworkModuleClient() {
        OkHttpClient init$lambda$0;
        init$lambda$0 = ClientUserAgent.init$lambda$0((Context) this.f3392e, (String) this.f3393i);
        return init$lambda$0;
    }

    @Override // ke.k
    public void d(Object obj, ke.g gVar) {
        ic.b bVar = (ic.b) obj;
        bVar.onEvents((Player) this.f3393i, new AnalyticsListener$Events(gVar, ((u) this.f3392e).f10547w));
    }

    @Override // io.sentry.q1
    public Object e() {
        w1 w1Var = (w1) this.f3392e;
        x1 x1Var = (x1) this.f3393i;
        w1Var.getClass();
        try {
            try {
                return Integer.valueOf(((io.sentry.vendor.gson.stream.a) x1Var.f12075e).P());
            } catch (Exception unused) {
                return Double.valueOf(((io.sentry.vendor.gson.stream.a) x1Var.f12075e).C());
            }
        } catch (Exception unused2) {
            return Long.valueOf(((io.sentry.vendor.gson.stream.a) x1Var.f12075e).Q());
        }
    }

    @Override // ec.b
    public Object execute() {
        switch (this.f3391d) {
            case 0:
                k kVar = (k) this.f3392e;
                Iterable iterable = (Iterable) this.f3393i;
                dc.h hVar = (dc.h) ((dc.d) kVar.f3400v);
                hVar.getClass();
                if (iterable.iterator().hasNext()) {
                    hVar.c().compileStatement("DELETE FROM events WHERE _id in " + dc.h.q(iterable)).execute();
                    break;
                }
                break;
            default:
                k kVar2 = (k) this.f3392e;
                for (Map.Entry entry : ((HashMap) this.f3393i).entrySet()) {
                    ((dc.h) ((dc.c) kVar2.G)).l(((Integer) entry.getValue()).intValue(), zb.c.INVALID_PAYLOD, (String) entry.getKey());
                }
                break;
        }
        return null;
    }

    @Override // ni.e
    public Object g(am.f fVar) {
        String valueOf;
        switch (this.f3391d) {
            case 13:
                String str = (String) this.f3392e;
                m mVar = (m) this.f3393i;
                Context context = (Context) fVar.b(Context.class);
                switch (mVar.f12046d) {
                    case 4:
                        ApplicationInfo applicationInfo = context.getApplicationInfo();
                        if (applicationInfo != null) {
                            valueOf = String.valueOf(applicationInfo.targetSdkVersion);
                            break;
                        }
                        valueOf = "";
                        break;
                    case 5:
                        ApplicationInfo applicationInfo2 = context.getApplicationInfo();
                        if (applicationInfo2 != null) {
                            valueOf = String.valueOf(applicationInfo2.minSdkVersion);
                            break;
                        }
                        valueOf = "";
                        break;
                    case 6:
                        int i5 = Build.VERSION.SDK_INT;
                        if (!context.getPackageManager().hasSystemFeature("android.hardware.type.television")) {
                            if (!context.getPackageManager().hasSystemFeature("android.hardware.type.watch")) {
                                if (!context.getPackageManager().hasSystemFeature("android.hardware.type.automotive")) {
                                    if (i5 >= 26 && context.getPackageManager().hasSystemFeature("android.hardware.type.embedded")) {
                                        valueOf = "embedded";
                                        break;
                                    }
                                    valueOf = "";
                                    break;
                                } else {
                                    valueOf = "auto";
                                    break;
                                }
                            } else {
                                valueOf = "watch";
                                break;
                            }
                        } else {
                            valueOf = "tv";
                            break;
                        }
                    default:
                        String installerPackageName = context.getPackageManager().getInstallerPackageName(context.getPackageName());
                        if (installerPackageName != null) {
                            valueOf = FirebaseCommonRegistrar.a(installerPackageName);
                            break;
                        }
                        valueOf = "";
                        break;
                }
                return new gj.a(str, valueOf);
            default:
                String str2 = (String) this.f3392e;
                ni.b bVar = (ni.b) this.f3393i;
                try {
                    Trace.beginSection(str2);
                    return bVar.f15484f.g(fVar);
                } finally {
                    Trace.endSection();
                }
        }
    }

    @Override // com.facebook.react.runtime.BridgelessAtomicRef.Provider
    public Object get() {
        BridgelessReactContext orCreateReactInstanceTask$lambda$45$lambda$41$lambda$38;
        orCreateReactInstanceTask$lambda$45$lambda$41$lambda$38 = ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$41$lambda$38((ReactHostImpl) this.f3392e, (String) this.f3393i);
        return orCreateReactInstanceTask$lambda$45$lambda$41$lambda$38;
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        iScope.M(new io.sentry.android.core.e((ActivityLifecycleIntegration) this.f3392e, iScope, (f1) this.f3393i));
    }

    @Override // ke.j
    public void invoke(Object obj) {
        switch (this.f3391d) {
            case 16:
                ((ic.b) obj).onMediaMetadataChanged((AnalyticsListener$EventTime) this.f3392e, (MediaMetadata) this.f3393i);
                break;
            case 17:
                ((ic.b) obj).onPlaybackParametersChanged((AnalyticsListener$EventTime) this.f3392e, (PlaybackParameters) this.f3393i);
                break;
            case 18:
            default:
                AnalyticsListener$EventTime analyticsListener$EventTime = (AnalyticsListener$EventTime) this.f3392e;
                VideoSize videoSize = (VideoSize) this.f3393i;
                ic.b bVar = (ic.b) obj;
                bVar.onVideoSizeChanged(analyticsListener$EventTime, videoSize);
                bVar.onVideoSizeChanged(analyticsListener$EventTime, videoSize.f5576d, videoSize.f5577e, videoSize.f5578i, videoSize.f5579v);
                break;
            case 19:
                ((ic.b) obj).onCues((AnalyticsListener$EventTime) this.f3392e, (CueGroup) this.f3393i);
                break;
            case 20:
                ((ic.b) obj).onAvailableCommandsChanged((AnalyticsListener$EventTime) this.f3392e, (Player.Commands) this.f3393i);
                break;
            case 21:
                ((ic.b) obj).onCues((AnalyticsListener$EventTime) this.f3392e, (List) this.f3393i);
                break;
            case 22:
                ((ic.b) obj).onTracksChanged((AnalyticsListener$EventTime) this.f3392e, (Tracks) this.f3393i);
                break;
            case 23:
                ((ic.b) obj).onMetadata((AnalyticsListener$EventTime) this.f3392e, (Metadata) this.f3393i);
                break;
        }
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        int i5 = this.f3391d;
        Object obj = this.f3393i;
        Object obj2 = this.f3392e;
        switch (i5) {
            case 2:
                AppRatingRequester.executeRequest$lambda$1((ReviewManager) obj2, (AppRatingRequester) obj, task);
                break;
            default:
                int i6 = EnhancedIntentService.f6188d;
                ((EnhancedIntentService) obj2).a((Intent) obj);
                break;
        }
    }

    @Override // com.facebook.react.devsupport.interfaces.PackagerStatusCallback
    public void onPackagerStatusFetched(boolean z5) {
        ReactHostImpl._get_isMetroRunning_$lambda$47((ReactHostImpl) this.f3392e, "isMetroRunning()", (TaskCompletionSource) this.f3393i, z5);
    }

    @Override // com.facebook.react.devsupport.inspector.TracingStateListener
    public void onStateChanged(TracingState tracingState, boolean z5) {
        ReactHostImpl.createReactHostInspectorTarget$lambda$69((ReactHostImpl) this.f3392e, (ReactHostInspectorTarget) this.f3393i, tracingState, z5);
    }
}
