package v2;

import a5.h0;
import android.os.Looper;
import androidx.fragment.app.f1;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.ViewModelStore;
import androidx.loader.app.LoaderManager;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.auth.api.signin.internal.SignInHubActivity;
import com.google.firebase.messaging.r;
import java.io.PrintWriter;
import java.lang.reflect.Modifier;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import r3.g;
import ve.d;
import ze.l;

/* loaded from: classes.dex */
public final class c extends LoaderManager {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final b f19179b;

    public c(LifecycleOwner lifecycleOwner, ViewModelStore store) {
        this.a = lifecycleOwner;
        Intrinsics.checkNotNullParameter(store, "store");
        f1 factory = b.f19176d;
        Intrinsics.checkNotNullParameter(factory, "factory");
        t2.a defaultCreationExtras = t2.a.f18168b;
        Intrinsics.checkNotNullParameter(store, "store");
        Intrinsics.checkNotNullParameter(factory, "factory");
        Intrinsics.checkNotNullParameter(defaultCreationExtras, "defaultCreationExtras");
        r rVar = new r(store, factory, defaultCreationExtras);
        Intrinsics.checkNotNullParameter(b.class, "modelClass");
        Intrinsics.checkNotNullParameter(b.class, "<this>");
        KClass modelClass = Reflection.getOrCreateKotlinClass(b.class);
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        String qualifiedName = modelClass != null ? modelClass.getQualifiedName() : null;
        if (qualifiedName == null) {
            throw new IllegalArgumentException("Local and anonymous classes can not be ViewModels");
        }
        this.f19179b = (b) rVar.g("androidx.lifecycle.ViewModelProvider.DefaultKey:".concat(qualifiedName), modelClass);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [androidx.lifecycle.LifecycleOwner, java.lang.Object] */
    @Override // androidx.loader.app.LoaderManager
    public final d b(g gVar) {
        ?? r02 = this.a;
        b bVar = this.f19179b;
        if (bVar.f19178c) {
            throw new IllegalStateException("Called while creating a loader");
        }
        if (Looper.getMainLooper() != Looper.myLooper()) {
            throw new IllegalStateException("initLoader must be called on the main thread");
        }
        a aVar = (a) bVar.f19177b.c(0);
        if (aVar != 0) {
            d dVar = aVar.f19173l;
            h0 h0Var = new h0(dVar, gVar);
            aVar.d(r02, h0Var);
            h0 h0Var2 = aVar.f19175n;
            if (h0Var2 != null) {
                aVar.g(h0Var2);
            }
            aVar.f19174m = r02;
            aVar.f19175n = h0Var;
            return dVar;
        }
        try {
            bVar.f19178c = true;
            SignInHubActivity signInHubActivity = (SignInHubActivity) gVar.f17126e;
            Set set = l.a;
            synchronized (set) {
            }
            d dVar2 = new d(signInHubActivity, set);
            if (d.class.isMemberClass() && !Modifier.isStatic(d.class.getModifiers())) {
                throw new IllegalArgumentException("Object returned from onCreateLoader must not be a non-static inner member class: " + dVar2);
            }
            a aVar2 = new a(dVar2);
            bVar.f19177b.e(0, aVar2);
            bVar.f19178c = false;
            d dVar3 = aVar2.f19173l;
            h0 h0Var3 = new h0(dVar3, gVar);
            aVar2.d(r02, h0Var3);
            h0 h0Var4 = aVar2.f19175n;
            if (h0Var4 != null) {
                aVar2.g(h0Var4);
            }
            aVar2.f19174m = r02;
            aVar2.f19175n = h0Var3;
            return dVar3;
        } catch (Throwable th2) {
            bVar.f19178c = false;
            throw th2;
        }
    }

    public final void c(String str, PrintWriter printWriter) {
        b bVar = this.f19179b;
        if (bVar.f19177b.g() > 0) {
            printWriter.print(str);
            printWriter.println("Loaders:");
            String str2 = str + "    ";
            for (int i5 = 0; i5 < bVar.f19177b.g(); i5++) {
                a aVar = (a) bVar.f19177b.h(i5);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(bVar.f19177b.d(i5));
                printWriter.print(": ");
                printWriter.println(aVar.toString());
                printWriter.print(str2);
                printWriter.print("mId=");
                printWriter.print(0);
                printWriter.print(" mArgs=");
                printWriter.println((Object) null);
                printWriter.print(str2);
                printWriter.print("mLoader=");
                printWriter.println(aVar.f19173l);
                d dVar = aVar.f19173l;
                String str3 = str2 + "  ";
                dVar.getClass();
                printWriter.print(str3);
                printWriter.print("mId=");
                printWriter.print(0);
                printWriter.print(" mListener=");
                printWriter.println(dVar.a);
                if (dVar.f19393b || dVar.f19396e) {
                    printWriter.print(str3);
                    printWriter.print("mStarted=");
                    printWriter.print(dVar.f19393b);
                    printWriter.print(" mContentChanged=");
                    printWriter.print(dVar.f19396e);
                    printWriter.print(" mProcessingChange=");
                    printWriter.println(false);
                }
                if (dVar.f19394c || dVar.f19395d) {
                    printWriter.print(str3);
                    printWriter.print("mAbandoned=");
                    printWriter.print(dVar.f19394c);
                    printWriter.print(" mReset=");
                    printWriter.println(dVar.f19395d);
                }
                if (dVar.f19398g != null) {
                    printWriter.print(str3);
                    printWriter.print("mTask=");
                    printWriter.print(dVar.f19398g);
                    printWriter.print(" waiting=");
                    dVar.f19398g.getClass();
                    printWriter.println(false);
                }
                if (dVar.f19399h != null) {
                    printWriter.print(str3);
                    printWriter.print("mCancellingTask=");
                    printWriter.print(dVar.f19399h);
                    printWriter.print(" waiting=");
                    dVar.f19399h.getClass();
                    printWriter.println(false);
                }
                if (aVar.f19175n != null) {
                    printWriter.print(str2);
                    printWriter.print("mCallbacks=");
                    printWriter.println(aVar.f19175n);
                    h0 h0Var = aVar.f19175n;
                    h0Var.getClass();
                    printWriter.print(str2 + "  ");
                    printWriter.print("mDeliveredData=");
                    printWriter.println(h0Var.f175e);
                }
                printWriter.print(str2);
                printWriter.print("mData=");
                d dVar2 = aVar.f19173l;
                Object obj = aVar.f2154e;
                Object obj2 = obj != LiveData.k ? obj : null;
                dVar2.getClass();
                StringBuilder sb2 = new StringBuilder(64);
                if (obj2 == null) {
                    sb2.append("null");
                } else {
                    Class<?> cls = obj2.getClass();
                    sb2.append(cls.getSimpleName());
                    sb2.append("{");
                    sb2.append(Integer.toHexString(System.identityHashCode(cls)));
                    sb2.append("}");
                }
                printWriter.println(sb2.toString());
                printWriter.print(str2);
                printWriter.print("mStarted=");
                printWriter.println(aVar.f2152c > 0);
            }
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append("LoaderManager{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append(" in ");
        Class<?> cls = this.a.getClass();
        sb2.append(cls.getSimpleName());
        sb2.append("{");
        sb2.append(Integer.toHexString(System.identityHashCode(cls)));
        sb2.append("}}");
        return sb2.toString();
    }
}
