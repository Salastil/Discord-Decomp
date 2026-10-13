package bq;

import android.os.Bundle;
import aq.m;
import aq.n;
import bf.t;
import com.google.android.exoplayer2.upstream.DataSource;
import com.google.android.gms.internal.gtm.zzbv;
import e4.r;
import ie.u0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import jp.h;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import mq.f;
import qe.i;
import yq.y;

/* loaded from: classes3.dex */
public abstract class b implements n, DataSource.Factory, jp.a, r4.e, sq.d {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3142d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f3143e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f3142d = i5;
        this.f3143e = obj;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = i5 != 1 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 1 ? 3 : 2];
        if (i5 != 1) {
            objArr[0] = "annotations";
        } else {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/annotations/AnnotatedImpl";
        }
        if (i5 != 1) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/annotations/AnnotatedImpl";
        } else {
            objArr[1] = "getAnnotations";
        }
        if (i5 != 1) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 == 1) {
            throw new IllegalStateException(format);
        }
    }

    public static /* synthetic */ void w0(int i5) {
        String str = (i5 == 1 || i5 == 2) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2) ? 2 : 3];
        if (i5 == 1 || i5 == 2) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/scopes/receivers/AbstractReceiverValue";
        } else {
            objArr[0] = "receiverType";
        }
        if (i5 == 1) {
            objArr[1] = "getType";
        } else if (i5 != 2) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/scopes/receivers/AbstractReceiverValue";
        } else {
            objArr[1] = "getOriginal";
        }
        if (i5 != 1 && i5 != 2) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 1 && i5 != 2) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // aq.n
    public void O(Object obj) {
        if (obj instanceof String) {
            ((ArrayList) this.f3143e).add((String) obj);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource.Factory
    public DataSource createDataSource() {
        pc.b bVar = (pc.b) this;
        pc.a aVar = new pc.a(bVar.f16342i, bVar.f16343v, (r) this.f3143e);
        u0 u0Var = bVar.f16344w;
        if (u0Var != null) {
            aVar.n(u0Var);
        }
        return aVar;
    }

    @Override // jp.a
    public h getAnnotations() {
        h hVar = (h) this.f3143e;
        if (hVar != null) {
            return hVar;
        }
        v0(1);
        throw null;
    }

    @Override // sq.d
    public y getType() {
        y yVar = (y) this.f3143e;
        if (yVar != null) {
            return yVar;
        }
        w0(1);
        throw null;
    }

    @Override // aq.n
    public void j() {
        y0((String[]) ((ArrayList) this.f3143e).toArray(new String[0]));
    }

    @Override // aq.n
    public m q0(hq.b bVar) {
        return null;
    }

    @Override // r4.e
    public List r0() {
        return (List) this.f3143e;
    }

    @Override // r4.e
    public boolean t0() {
        List list = (List) this.f3143e;
        return list.isEmpty() || (list.size() == 1 && ((y4.a) list.get(0)).c());
    }

    public String toString() {
        switch (this.f3142d) {
            case 6:
                StringBuilder sb2 = new StringBuilder();
                List list = (List) this.f3143e;
                if (!list.isEmpty()) {
                    sb2.append("values=");
                    sb2.append(Arrays.toString(list.toArray()));
                }
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [kotlin.jvm.functions.Function0, kotlin.jvm.internal.Lambda] */
    public hl.b x0() {
        return (hl.b) ((Lambda) this.f3143e).invoke();
    }

    public abstract void y0(String[] strArr);

    public b(zzbv zzbvVar) {
        this.f3142d = 5;
        i zzd = zzbvVar.zzd();
        gf.a zzr = zzbvVar.zzr();
        t.g(zzd);
        new ArrayList();
        t.g(zzr);
        new HashMap();
        new ArrayList();
        this.f3143e = zzbvVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public b(Function0 controllerProvider) {
        this.f3142d = 2;
        Intrinsics.checkNotNullParameter(controllerProvider, "controllerProvider");
        this.f3143e = (Lambda) controllerProvider;
    }

    public b(h hVar) {
        this.f3142d = 3;
        if (hVar != null) {
            this.f3143e = hVar;
        } else {
            v0(0);
            throw null;
        }
    }

    public b(y yVar) {
        this.f3142d = 7;
        if (yVar != null) {
            this.f3143e = yVar;
        } else {
            w0(0);
            throw null;
        }
    }

    public b(String type, Bundle data) {
        this.f3142d = 4;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(data, "data");
        this.f3143e = type;
    }

    public b(int i5) {
        this.f3142d = i5;
        switch (i5) {
            case 1:
                this.f3143e = new r(11);
                break;
            default:
                this.f3143e = new ArrayList();
                break;
        }
    }

    @Override // aq.n
    public void p(f fVar) {
    }

    @Override // aq.n
    public void C(hq.b bVar, hq.e eVar) {
    }
}
