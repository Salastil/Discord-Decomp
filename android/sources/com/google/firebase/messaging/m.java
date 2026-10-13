package com.google.firebase.messaging;

import android.app.ApplicationExitInfo;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.util.Base64;
import android.util.Log;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.shell.MainReactPackage;
import com.google.android.gms.tasks.Task;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import javax.inject.Provider;
import nd.z0;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements jg.a, tb.e, com.horcrux.svg.d, d0.h, dc.f, hc.f, ni.e, Provider {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6246d;

    public /* synthetic */ m(int i5) {
        this.f6246d = i5;
    }

    public static /* bridge */ /* synthetic */ ApplicationExitInfo b(Object obj) {
        return (ApplicationExitInfo) obj;
    }

    @Override // jg.a
    public Object N(Task task) {
        Bundle bundle = (Bundle) task.j();
        if (bundle == null) {
            throw new IOException("SERVICE_NOT_AVAILABLE");
        }
        String string = bundle.getString("registration_id");
        if (string != null) {
            return string;
        }
        String string2 = bundle.getString("unregistered");
        if (string2 != null) {
            return string2;
        }
        String string3 = bundle.getString("error");
        if ("RST".equals(string3)) {
            throw new IOException("INSTANCE_ID_RESET");
        }
        if (string3 != null) {
            throw new IOException(string3);
        }
        Log.w("FirebaseMessaging", "Unexpected response: " + bundle, new Throwable());
        throw new IOException("SERVICE_NOT_AVAILABLE");
    }

    @Override // hc.f
    public hc.g a(Bundle bundle) {
        switch (this.f6246d) {
            case 14:
                int i5 = bundle.getInt(ge.h.f9181v, -1);
                int[] intArray = bundle.getIntArray(ge.h.f9182w);
                int i6 = bundle.getInt(ge.h.f9183x, -1);
                ke.b.g(i5 >= 0 && i6 >= 0);
                intArray.getClass();
                return new ge.h(i5, i6, intArray);
            default:
                Bundle bundle2 = bundle.getBundle(ge.s.f9203i);
                bundle2.getClass();
                z0 z0Var = (z0) z0.E.a(bundle2);
                int[] intArray2 = bundle.getIntArray(ge.s.f9204v);
                intArray2.getClass();
                return new ge.s(z0Var, intArray2.length == 0 ? Collections.EMPTY_LIST : new hi.a(0, intArray2.length, intArray2));
        }
    }

    @Override // tb.e, dc.f
    public Object apply(Object obj) {
        switch (this.f6246d) {
            case 2:
                fj.e eVar = (fj.e) obj;
                k2.r rVar = q.a;
                rVar.getClass();
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    rVar.s(eVar, byteArrayOutputStream);
                } catch (IOException unused) {
                }
                return byteArrayOutputStream.toByteArray();
            default:
                Cursor rawQuery = ((SQLiteDatabase) obj).rawQuery("SELECT distinct t._id, t.backend_name, t.priority, t.extras FROM transport_contexts AS t, events AS e WHERE e.context_id = t._id", new String[0]);
                try {
                    ArrayList arrayList = new ArrayList();
                    while (rawQuery.moveToNext()) {
                        k2.r a = wb.i.a();
                        a.K(rawQuery.getString(1));
                        a.f13144v = gc.a.b(rawQuery.getInt(2));
                        String string = rawQuery.getString(3);
                        a.f13143i = string == null ? null : Base64.decode(string, 0);
                        arrayList.add(a.k());
                    }
                    return arrayList;
                } finally {
                    rawQuery.close();
                }
        }
    }

    @Override // ni.e
    public Object g(am.f fVar) {
        Set h6 = fVar.h(ni.q.a(gj.a.class));
        gj.c cVar = gj.c.f9327i;
        if (cVar == null) {
            synchronized (gj.c.class) {
                try {
                    cVar = gj.c.f9327i;
                    if (cVar == null) {
                        cVar = new gj.c(0);
                        gj.c.f9327i = cVar;
                    }
                } finally {
                }
            }
        }
        return new gj.b(h6, cVar);
    }

    @Override // javax.inject.Provider
    public Object get() {
        NativeModule viewManagersMap$lambda$4;
        NativeModule viewManagersMap$lambda$5;
        NativeModule viewManagersMap$lambda$6;
        NativeModule viewManagersMap$lambda$7;
        NativeModule viewManagersMap$lambda$8;
        NativeModule viewManagersMap$lambda$9;
        NativeModule viewManagersMap$lambda$0;
        NativeModule viewManagersMap$lambda$10;
        NativeModule viewManagersMap$lambda$11;
        NativeModule viewManagersMap$lambda$12;
        NativeModule viewManagersMap$lambda$13;
        NativeModule viewManagersMap$lambda$14;
        NativeModule viewManagersMap$lambda$1;
        switch (this.f6246d) {
            case 17:
                viewManagersMap$lambda$4 = MainReactPackage.viewManagersMap$lambda$4();
                return viewManagersMap$lambda$4;
            case 18:
                viewManagersMap$lambda$5 = MainReactPackage.viewManagersMap$lambda$5();
                return viewManagersMap$lambda$5;
            case 19:
                viewManagersMap$lambda$6 = MainReactPackage.viewManagersMap$lambda$6();
                return viewManagersMap$lambda$6;
            case 20:
                viewManagersMap$lambda$7 = MainReactPackage.viewManagersMap$lambda$7();
                return viewManagersMap$lambda$7;
            case 21:
                viewManagersMap$lambda$8 = MainReactPackage.viewManagersMap$lambda$8();
                return viewManagersMap$lambda$8;
            case 22:
                viewManagersMap$lambda$9 = MainReactPackage.viewManagersMap$lambda$9();
                return viewManagersMap$lambda$9;
            case 23:
                viewManagersMap$lambda$0 = MainReactPackage.viewManagersMap$lambda$0();
                return viewManagersMap$lambda$0;
            case 24:
                viewManagersMap$lambda$10 = MainReactPackage.viewManagersMap$lambda$10();
                return viewManagersMap$lambda$10;
            case 25:
                viewManagersMap$lambda$11 = MainReactPackage.viewManagersMap$lambda$11();
                return viewManagersMap$lambda$11;
            case 26:
                viewManagersMap$lambda$12 = MainReactPackage.viewManagersMap$lambda$12();
                return viewManagersMap$lambda$12;
            case 27:
                viewManagersMap$lambda$13 = MainReactPackage.viewManagersMap$lambda$13();
                return viewManagersMap$lambda$13;
            case 28:
                viewManagersMap$lambda$14 = MainReactPackage.viewManagersMap$lambda$14();
                return viewManagersMap$lambda$14;
            default:
                viewManagersMap$lambda$1 = MainReactPackage.viewManagersMap$lambda$1();
                return viewManagersMap$lambda$1;
        }
    }

    @Override // d0.h
    public double invoke(double d6) {
        double d7;
        switch (this.f6246d) {
            case 5:
                double d8 = d6 < 0.0d ? -d6 : d6;
                if (d8 >= 0.0031308049535603718d) {
                    d8 = Math.pow(d8, 0.4166666666666667d) - 0.05213270142180095d;
                    d7 = 0.9478672985781991d;
                } else {
                    d7 = 0.07739938080495357d;
                }
                return Math.copySign(d8 / d7, d6);
            case 6:
                double d10 = d6 < 0.0d ? -d6 : d6;
                return Math.copySign(d10 >= 0.04045d ? Math.pow((0.9478672985781991d * d10) + 0.05213270142180095d, 2.4d) : d10 * 0.07739938080495357d, d6);
            default:
                return d6;
        }
    }

    public /* synthetic */ m(androidx.appcompat.widget.w wVar) {
        this.f6246d = 1;
    }
}
