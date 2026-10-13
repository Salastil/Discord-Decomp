package a3;

import android.content.Context;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import com.facebook.react.devsupport.StackTraceHelper;
import com.margelo.nitro.rive.v0;
import e2.z;
import i0.f0;
import i0.u;
import java.io.File;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import javax.net.ssl.SSLPeerUnverifiedException;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.text.StringsKt;
import kotlinx.coroutines.flow.Flow;
import nr.x;

/* loaded from: classes.dex */
public final class q extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f98d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f99e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ q(int i5, Object obj) {
        super(0);
        this.f98d = i5;
        this.f99e = obj;
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [kotlin.jvm.functions.Function0, kotlin.jvm.internal.Lambda] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        h3.g sQLiteOpenHelper;
        switch (this.f98d) {
            case 0:
                return ((r) this.f99e).b();
            case 1:
                return new a4.c[((Flow[]) this.f99e).length];
            case 2:
                File file = (File) ((z) this.f99e).a.invoke();
                String it = file.getAbsolutePath();
                synchronized (z.j) {
                    LinkedHashSet linkedHashSet = z.f7921i;
                    if (linkedHashSet.contains(it)) {
                        throw new IllegalStateException(("There are multiple DataStores active for the same file: " + file + ". You should either maintain your DataStore as a singleton or confirm that there is no two DataStore's active on the same file (by confirming that the scope is cancelled).").toString());
                    }
                    Intrinsics.checkNotNullExpressionValue(it, "it");
                    linkedHashSet.add(it);
                }
                return file;
            case 3:
                Context context = (Context) this.f99e;
                Intrinsics.checkNotNullParameter(context, "<this>");
                Intrinsics.checkNotNullParameter("media_performance_class", StackTraceHelper.NAME_KEY);
                String fileName = Intrinsics.stringPlus("media_performance_class", ".preferences_pb");
                Intrinsics.checkNotNullParameter(context, "<this>");
                Intrinsics.checkNotNullParameter(fileName, "fileName");
                return new File(context.getApplicationContext().getFilesDir(), Intrinsics.stringPlus("datastore/", fileName));
            case 4:
                return (Integer) x.w(kotlin.coroutines.g.f13538d, new v0((PlayServicesDevicePerformance) this.f99e, null, 1));
            case 5:
                File file2 = (File) ((q) this.f99e).invoke();
                Intrinsics.checkNotNullParameter(file2, "<this>");
                String name = file2.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                if (Intrinsics.areEqual(StringsKt.W('.', name, ""), "preferences_pb")) {
                    return file2;
                }
                throw new IllegalStateException(("File extension for file: " + file2 + " does not match required extension for Preferences file: preferences_pb").toString());
            case 6:
                h3.h hVar = (h3.h) this.f99e;
                String str = hVar.f9506e;
                if (str == null || !hVar.f9508v) {
                    sQLiteOpenHelper = new h3.g(hVar.f9505d, hVar.f9506e, new u4.b(12), hVar.f9507i, hVar.f9509w);
                } else {
                    Context context2 = hVar.f9505d;
                    Intrinsics.checkNotNullParameter(context2, "context");
                    File noBackupFilesDir = context2.getNoBackupFilesDir();
                    Intrinsics.checkNotNullExpressionValue(noBackupFilesDir, "context.noBackupFilesDir");
                    sQLiteOpenHelper = new h3.g(hVar.f9505d, new File(noBackupFilesDir, str).getAbsolutePath(), new u4.b(12), hVar.f9507i, hVar.f9509w);
                }
                boolean z5 = hVar.f9511y;
                Intrinsics.checkNotNullParameter(sQLiteOpenHelper, "sQLiteOpenHelper");
                sQLiteOpenHelper.setWriteAheadLoggingEnabled(z5);
                return sQLiteOpenHelper;
            case 7:
                i0.z zVar = ((u) this.f99e).f10415m;
                zVar.f10434i.J = true;
                i0.x xVar = zVar.j;
                if (xVar != null) {
                    xVar.H = true;
                }
                return Unit.a;
            case 8:
                f0 f0Var = ((f0) this.f99e).G;
                if (f0Var != null) {
                    f0Var.H();
                }
                return Unit.a;
            case 9:
                try {
                    return (List) ((Lambda) this.f99e).invoke();
                } catch (SSLPeerUnverifiedException unused) {
                    return m0.f13512d;
                }
            default:
                ps.q qVar = ((ts.k) this.f99e).f18741e;
                Intrinsics.checkNotNull(qVar);
                List a = qVar.a();
                ArrayList arrayList = new ArrayList(d0.l(a, 10));
                Iterator it2 = a.iterator();
                while (it2.hasNext()) {
                    arrayList.add((X509Certificate) ((Certificate) it2.next()));
                }
                return arrayList;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public q(Function0 function0) {
        super(0);
        this.f98d = 9;
        this.f99e = (Lambda) function0;
    }
}
