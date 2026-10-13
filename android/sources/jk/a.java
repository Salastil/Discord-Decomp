package jk;

import ad.d0;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.henninghall.date_picker.pickers.AndroidNative;
import e4.p;
import ha.l;
import j$.util.DesugarTimeZone;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Iterator;
import java.util.Locale;
import k2.r;

/* loaded from: classes3.dex */
public final class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12811d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AndroidNative f12812e;

    public /* synthetic */ a(AndroidNative androidNative, int i5) {
        this.f12811d = i5;
        this.f12812e = androidNative;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f12811d) {
            case 0:
                AndroidNative androidNative = this.f12812e;
                androidNative.J0 = false;
                ((l) androidNative.G0).W();
                break;
            default:
                AndroidNative androidNative2 = this.f12812e;
                int i5 = 0;
                androidNative2.L0 = false;
                d0 d0Var = (d0) ((u4.b) ((l) androidNative2.G0).f9613d).f18810e;
                r rVar = (r) d0Var.f319v;
                p pVar = (p) d0Var.f318i;
                lk.b bVar = (lk.b) d0Var.f317e;
                if (!bVar.e()) {
                    SimpleDateFormat h6 = d0Var.h();
                    String b10 = bVar.b(0);
                    Calendar calendar = null;
                    try {
                        h6.setLenient(false);
                        h6.parse(b10);
                        SimpleDateFormat h7 = d0Var.h();
                        String b11 = bVar.b(0);
                        Calendar calendar2 = Calendar.getInstance(pVar.l());
                        try {
                            h7.setLenient(true);
                            calendar2.setTime(h7.parse(b11));
                            calendar = calendar2;
                        } catch (ParseException e9) {
                            e9.printStackTrace();
                        }
                        if (calendar != null) {
                            Calendar a = pVar.a((kk.a) pVar.f7992g);
                            if (a == null || !calendar.before(a)) {
                                Calendar a10 = pVar.a((kk.a) pVar.f7993h);
                                if (a10 == null || !calendar.after(a10)) {
                                    lk.b bVar2 = (lk.b) rVar.f13143i;
                                    StringBuilder sb2 = new StringBuilder();
                                    Iterator it = bVar2.c().iterator();
                                    while (it.hasNext()) {
                                        nk.e eVar = (nk.e) it.next();
                                        sb2.append(eVar.g((String) eVar.f15537c.get(eVar.f15538d.getValue())));
                                    }
                                    String sb3 = sb2.toString();
                                    ((p) rVar.f13142e).a = calendar;
                                    String str = (String) ((kk.a) pVar.k).a;
                                    WritableMap createMap = Arguments.createMap();
                                    SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'", Locale.US);
                                    simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
                                    createMap.putString("date", simpleDateFormat.format(calendar.getTime()));
                                    createMap.putString("dateString", sb3);
                                    createMap.putString(StackTraceHelper.ID_KEY, str);
                                    ((DeviceEventManagerModule.RCTDeviceEventEmitter) com.mkuczera.haptic.d.f6615b.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("dateChange", createMap);
                                } else {
                                    rVar.i(a10);
                                }
                            } else {
                                rVar.i(a);
                            }
                        }
                    } catch (ParseException unused) {
                        SimpleDateFormat h10 = d0Var.h();
                        h10.setLenient(false);
                        while (true) {
                            if (i5 < 10) {
                                try {
                                    String b12 = bVar.b(i5);
                                    Calendar calendar3 = Calendar.getInstance(pVar.l());
                                    calendar3.setTime(h10.parse(b12));
                                    calendar = calendar3;
                                } catch (ParseException unused2) {
                                    i5++;
                                }
                            }
                        }
                        if (calendar != null) {
                            rVar.i(calendar);
                        }
                    }
                }
                ((l) androidNative2.G0).W();
                break;
        }
    }
}
