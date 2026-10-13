package app.rive.runtime.kotlin.core;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;
import android.view.View;
import android.webkit.GeolocationPermissions;
import android.webkit.PermissionRequest;
import androidx.appcompat.widget.m3;
import androidx.appcompat.widget.y2;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import c5.o;
import c5.s;
import cc.k;
import cd.y;
import cd.z;
import com.discord.MainApplication;
import com.discord.age_assurance.PlayIntegrityModule;
import com.discord.age_assurance.f;
import com.discord.chat.presentation.message.view.GuildInviteView;
import com.discord.libdiscore.LibdiscoreModuleClass;
import com.discord.libdiscore.LibdiscoreModuleProvider;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerProvider;
import com.facebook.react.defaults.DefaultReactNativeHost;
import com.facebook.react.devsupport.inspector.TracingState;
import com.facebook.react.devsupport.inspector.TracingStateListener;
import com.facebook.react.devsupport.perfmonitor.PerfMonitorUpdateListener;
import com.facebook.react.modules.core.PermissionListener;
import com.facebook.react.runtime.ReactHostInspectorTarget;
import com.facebook.react.uimanager.UIManagerModule;
import com.google.android.exoplayer2.Format;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.messaging.b0;
import com.google.firebase.messaging.d0;
import com.google.firebase.messaging.m;
import com.google.firebase.messaging.r;
import com.reactnativecommunity.webview.g;
import com.swmansion.rnscreens.r0;
import dc.h;
import ec.b;
import ei.j;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.ScheduledFuture;
import jg.c;
import jg.d;
import kotlin.jvm.internal.Intrinsics;
import wb.i;
import ze.e;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements o, b, y, LibdiscoreModuleProvider, d, c, AccessibilityViewCommand, UIManagerProvider, TracingStateListener, OnCompleteListener, PermissionListener, UIManagerModule.CustomEventNamesResolver, y2, j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2612d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2613e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f2612d = i5;
        this.f2613e = obj;
    }

    @Override // cd.y
    public int a(Object obj) {
        Format format = (Format) this.f2613e;
        cd.o oVar = (cd.o) obj;
        String str = oVar.f3441b;
        return ((str.equals(format.I) || str.equals(z.b(format))) && oVar.c(format, false)) ? 1 : 0;
    }

    @Override // androidx.appcompat.widget.y2
    public boolean b() {
        switch (this.f2612d) {
            case 23:
                com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this.f2613e;
                y2 y2Var = bVar.H0;
                boolean b10 = y2Var != null ? y2Var.b() : false;
                m3 m3Var = bVar.J0;
                if (m3Var.a) {
                    ((com.swmansion.rnscreens.a) m3Var.f1038d).remove();
                    m3Var.a = false;
                }
                return b10;
            default:
                r0.d((r0) this.f2613e);
                return false;
        }
    }

    @Override // androidx.core.view.accessibility.AccessibilityViewCommand
    public boolean c(View view, AccessibilityViewCommand.CommandArguments commandArguments) {
        boolean clickListeners$lambda$12;
        clickListeners$lambda$12 = GuildInviteView.setClickListeners$lambda$12((View.OnClickListener) this.f2613e, view, commandArguments);
        return clickListeners$lambda$12;
    }

    @Override // com.facebook.react.bridge.UIManagerProvider
    public UIManager createUIManager(ReactApplicationContext reactApplicationContext) {
        UIManager uIManagerProvider$lambda$0;
        uIManagerProvider$lambda$0 = DefaultReactNativeHost.getUIManagerProvider$lambda$0((DefaultReactNativeHost) this.f2613e, reactApplicationContext);
        return uIManagerProvider$lambda$0;
    }

    @Override // c5.o
    public void d(s sVar) {
        CDNAssetLoader.loadContents$lambda$0((CDNAssetLoader) this.f2613e, sVar);
    }

    @Override // ec.b
    public Object execute() {
        SQLiteDatabase c6;
        int i5 = this.f2612d;
        boolean z5 = false;
        Object obj = this.f2613e;
        switch (i5) {
            case 1:
                h hVar = (h) ((dc.c) obj);
                hVar.getClass();
                int i6 = zb.a.f21134e;
                r rVar = new r(19, z5);
                rVar.f6260i = null;
                rVar.f6261v = new ArrayList();
                rVar.f6262w = null;
                rVar.f6259e = "";
                HashMap hashMap = new HashMap();
                c6 = hVar.c();
                c6.beginTransaction();
                try {
                    zb.a aVar = (zb.a) h.r(c6.rawQuery("SELECT log_source, reason, events_dropped_count FROM log_event_dropped", new String[0]), new bc.a(hVar, hashMap, rVar, 6));
                    c6.setTransactionSuccessful();
                    return aVar;
                } finally {
                }
            case 2:
                h hVar2 = (h) ((dc.d) obj);
                long e9 = hVar2.f7478e.e() - hVar2.f7480v.f7469d;
                c6 = hVar2.c();
                c6.beginTransaction();
                try {
                    String[] strArr = {String.valueOf(e9)};
                    Cursor rawQuery = c6.rawQuery("SELECT COUNT(*), transport_name FROM events WHERE timestamp_ms < ? GROUP BY transport_name", strArr);
                    while (rawQuery.moveToNext()) {
                        try {
                            hVar2.l(rawQuery.getInt(0), zb.c.MESSAGE_TOO_OLD, rawQuery.getString(1));
                        } catch (Throwable th2) {
                            rawQuery.close();
                            throw th2;
                        }
                    }
                    rawQuery.close();
                    int delete = c6.delete("events", "timestamp_ms < ?", strArr);
                    c6.setTransactionSuccessful();
                    c6.endTransaction();
                    return Integer.valueOf(delete);
                } finally {
                }
            case 3:
                h hVar3 = (h) ((dc.c) ((k) obj).G);
                c6 = hVar3.c();
                c6.beginTransaction();
                try {
                    c6.compileStatement("DELETE FROM log_event_dropped").execute();
                    c6.compileStatement("UPDATE global_log_event_state SET last_metrics_upload_ms=" + hVar3.f7478e.e()).execute();
                    c6.setTransactionSuccessful();
                    return null;
                } finally {
                }
            default:
                r rVar2 = (r) obj;
                Iterator it = ((Iterable) ((h) ((dc.d) rVar2.f6260i)).g(new m(8))).iterator();
                while (it.hasNext()) {
                    ((e4.m) rVar2.f6261v).g0((i) it.next(), 1, false);
                }
                return null;
        }
    }

    @Override // com.discord.libdiscore.LibdiscoreModuleProvider, ei.j
    public LibdiscoreModuleClass.LibdiscoreModule get() {
        LibdiscoreModuleClass.LibdiscoreModule libdiscoreModuleProvider$lambda$6;
        libdiscoreModuleProvider$lambda$6 = MainApplication.libdiscoreModuleProvider$lambda$6((MainApplication) this.f2613e);
        return libdiscoreModuleProvider$lambda$6;
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        switch (this.f2612d) {
            case 18:
                b0.a((Intent) this.f2613e);
                break;
            case 19:
                ((d0) this.f2613e).f6228b.d(null);
                break;
            default:
                ((ScheduledFuture) this.f2613e).cancel(false);
                break;
        }
    }

    @Override // jg.c
    public void onFailure(Exception e9) {
        switch (this.f2612d) {
            case 11:
                PlayIntegrityModule.withTokenProvider$lambda$12((PlayIntegrityModule) this.f2613e, e9);
                break;
            default:
                PlayServicesDevicePerformance this$0 = (PlayServicesDevicePerformance) this.f2613e;
                String str = this$0.f1524b;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(e9, "e");
                if (!(e9 instanceof e)) {
                    if (e9 instanceof IllegalStateException) {
                        Log.e(str, "Error saving mediaPerformanceClass", e9);
                        break;
                    }
                } else {
                    Log.e(str, "Error saving mediaPerformanceClass", e9);
                    break;
                }
                break;
        }
    }

    @Override // com.facebook.react.modules.core.PermissionListener
    public boolean onRequestPermissionsResult(int i5, String[] strArr, int[] iArr) {
        PermissionRequest permissionRequest;
        ArrayList arrayList;
        ArrayList arrayList2;
        ArrayList arrayList3;
        ArrayList arrayList4;
        GeolocationPermissions.Callback callback;
        String str;
        g gVar = (g) this.f2613e;
        ArrayList arrayList5 = gVar.G;
        gVar.F = false;
        boolean z5 = false;
        for (int i6 = 0; i6 < strArr.length; i6++) {
            String str2 = strArr[i6];
            boolean z6 = iArr[i6] == 0;
            if (str2.equals("android.permission.ACCESS_FINE_LOCATION") && (callback = gVar.f6642y) != null && (str = gVar.E) != null) {
                if (z6) {
                    callback.invoke(str, true, false);
                } else {
                    callback.invoke(str, false, false);
                }
                gVar.f6642y = null;
                gVar.E = null;
            }
            if (str2.equals("android.permission.RECORD_AUDIO")) {
                if (z6 && (arrayList4 = gVar.f6641x) != null) {
                    arrayList4.add("android.webkit.resource.AUDIO_CAPTURE");
                }
                z5 = true;
            }
            if (str2.equals("android.permission.CAMERA")) {
                if (z6 && (arrayList3 = gVar.f6641x) != null) {
                    arrayList3.add("android.webkit.resource.VIDEO_CAPTURE");
                }
                z5 = true;
            }
            if (str2.equals("android.webkit.resource.PROTECTED_MEDIA_ID")) {
                if (z6 && (arrayList2 = gVar.f6641x) != null) {
                    arrayList2.add("android.webkit.resource.PROTECTED_MEDIA_ID");
                }
                z5 = true;
            }
        }
        if (z5 && (permissionRequest = gVar.f6640w) != null && (arrayList = gVar.f6641x) != null) {
            permissionRequest.grant((String[]) arrayList.toArray(new String[0]));
            gVar.f6640w = null;
            gVar.f6641x = null;
        }
        if (arrayList5.isEmpty()) {
            return true;
        }
        gVar.a(arrayList5);
        return false;
    }

    @Override // com.facebook.react.devsupport.inspector.TracingStateListener
    public void onStateChanged(TracingState tracingState, boolean z5) {
        ReactHostInspectorTarget.addPerfMonitorListener$lambda$0((PerfMonitorUpdateListener) this.f2613e, tracingState, z5);
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        switch (this.f2612d) {
            case 7:
                ((com.discord.age_assurance.a) this.f2613e).invoke(obj);
                break;
            case 8:
                ((com.discord.age_assurance.c) this.f2613e).invoke(obj);
                break;
            case 9:
                ((com.discord.age_assurance.c) this.f2613e).invoke(obj);
                break;
            case 10:
                ((f) this.f2613e).invoke(obj);
                break;
            case 11:
            case 12:
            case 13:
            default:
                androidx.fragment.app.s tmp0 = (androidx.fragment.app.s) this.f2613e;
                Intrinsics.checkNotNullParameter(tmp0, "$tmp0");
                tmp0.invoke(obj);
                break;
            case 14:
                ((com.discord.security_key.a) this.f2613e).invoke(obj);
                break;
            case 15:
                ((com.discord.security_key.a) this.f2613e).invoke(obj);
                break;
        }
    }

    @Override // com.facebook.react.uimanager.UIManagerModule.CustomEventNamesResolver
    public String resolveCustomEventName(String str) {
        return ((UIManager) this.f2613e).resolveCustomDirectEventName(str);
    }

    @Override // ei.j
    public Object get() {
        switch (this.f2612d) {
            case 27:
                return (hc.j) this.f2613e;
            case 28:
                return (ge.r) this.f2613e;
            default:
                return (hc.b) this.f2613e;
        }
    }
}
