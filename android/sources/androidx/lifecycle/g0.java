package androidx.lifecycle;

import android.util.Log;
import app.rive.runtime.kotlin.core.FileAsset;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.margelo.nitro.rive.w1;
import com.reactnativedocumentpicker.RNDocumentPickerModule;
import java.io.File;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.sync.Mutex;

/* loaded from: classes.dex */
public final class g0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2186d;

    /* renamed from: e, reason: collision with root package name */
    public int f2187e;

    /* renamed from: i, reason: collision with root package name */
    public Object f2188i;

    /* renamed from: v, reason: collision with root package name */
    public Object f2189v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f2190w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f2191x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g0(ReadableArray readableArray, int i5, pl.c cVar, ReactContext reactContext, File file, Continuation continuation) {
        super(2, continuation);
        this.f2186d = 2;
        this.f2188i = readableArray;
        this.f2187e = i5;
        this.f2189v = cVar;
        this.f2190w = reactContext;
        this.f2191x = file;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f2186d) {
            case 0:
                return new g0((wr.b) this.f2191x, (Function2) this.f2190w, continuation);
            case 1:
                return new g0((com.margelo.nitro.rive.p) this.f2188i, (w1) this.f2189v, (FileAsset) this.f2190w, (nr.o) this.f2191x, continuation, 1);
            case 2:
                return new g0((ReadableArray) this.f2188i, this.f2187e, (pl.c) this.f2189v, (ReactContext) this.f2190w, (File) this.f2191x, continuation);
            default:
                return new g0((RNDocumentPickerModule) this.f2188i, (ReadableArray) this.f2189v, (String) this.f2190w, (Promise) this.f2191x, continuation, 3);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f2186d) {
        }
        return ((g0) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0, types: [kotlin.coroutines.Continuation] */
    /* JADX WARN: Type inference failed for: r5v10 */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Function2 function2;
        Mutex mutex;
        Throwable th2;
        Mutex mutex2;
        pl.c cVar;
        ReactApplicationContext reactApplicationContext;
        int i5 = this.f2186d;
        Object obj2 = this.f2191x;
        Object obj3 = null;
        Object obj4 = this.f2190w;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i6 = this.f2187e;
                try {
                    if (i6 == 0) {
                        ki.b.R(obj);
                        wr.b bVar = (wr.b) obj2;
                        function2 = (Function2) obj4;
                        this.f2188i = bVar;
                        this.f2189v = function2;
                        this.f2187e = 1;
                        if (bVar.a(this) == aVar) {
                            return aVar;
                        }
                        mutex = bVar;
                    } else {
                        if (i6 != 1) {
                            if (i6 != 2) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            mutex2 = (Mutex) this.f2188i;
                            try {
                                ki.b.R(obj);
                                Unit unit = Unit.a;
                                mutex2.b(null);
                                return Unit.a;
                            } catch (Throwable th3) {
                                th2 = th3;
                                mutex2.b(null);
                                throw th2;
                            }
                        }
                        function2 = (Function2) this.f2189v;
                        mutex = (Mutex) this.f2188i;
                        ki.b.R(obj);
                    }
                    f0 f0Var = new f0(function2, null);
                    this.f2188i = mutex;
                    this.f2189v = null;
                    this.f2187e = 2;
                    if (nr.x.i(f0Var, this) == aVar) {
                        return aVar;
                    }
                    mutex2 = mutex;
                    Unit unit2 = Unit.a;
                    mutex2.b(null);
                    return Unit.a;
                } catch (Throwable th4) {
                    th2 = th4;
                    mutex2 = mutex;
                    mutex2.b(null);
                    throw th2;
                }
            case 1:
                nr.o oVar = (nr.o) obj2;
                com.margelo.nitro.rive.p pVar = (com.margelo.nitro.rive.p) this.f2188i;
                ko.a aVar2 = ko.a.f13464d;
                int i10 = this.f2187e;
                try {
                } catch (Exception e9) {
                    Log.e("ReferencedAssetLoader", "Failed to load asset: " + e9.getMessage());
                    ur.e eVar = nr.g0.a;
                    or.d dVar = sr.q.a;
                    com.margelo.nitro.rive.t tVar = new com.margelo.nitro.rive.t(oVar, r5, 4);
                    this.f2187e = 3;
                    obj = nr.x.A(dVar, tVar, this);
                    if (obj == aVar2) {
                        return aVar2;
                    }
                }
                if (i10 == 0) {
                    ki.b.R(obj);
                    com.margelo.nitro.rive.g a = pVar.a();
                    this.f2187e = 1;
                    obj = a.a(pVar, this);
                    if (obj == aVar2) {
                        return aVar2;
                    }
                } else {
                    if (i10 != 1) {
                        if (i10 == 2) {
                            ki.b.R(obj);
                            ((Boolean) obj).getClass();
                            return Unit.a;
                        }
                        if (i10 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        ((Boolean) obj).getClass();
                        return Unit.a;
                    }
                    ki.b.R(obj);
                }
                byte[] bArr = (byte[]) obj;
                ur.e eVar2 = nr.g0.a;
                or.d dVar2 = sr.q.a;
                co.a aVar3 = new co.a((w1) this.f2189v, bArr, (FileAsset) obj4, oVar, (Continuation) null);
                this.f2187e = 2;
                obj = nr.x.A(dVar2, aVar3, this);
                if (obj == aVar2) {
                    return aVar2;
                }
                ((Boolean) obj).getClass();
                return Unit.a;
            case 2:
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                WritableMap createMap = Arguments.createMap();
                ReadableArray readableArray = (ReadableArray) this.f2188i;
                int i11 = this.f2187e;
                ReadableMap map = readableArray.getMap(i11);
                try {
                } catch (Exception e10) {
                    String localizedMessage = e10.getLocalizedMessage();
                    if (localizedMessage == null && (localizedMessage = e10.getMessage()) == null) {
                        localizedMessage = "Unknown error";
                    }
                    createMap.putString("status", "error");
                    createMap.putString("copyError", localizedMessage);
                    createMap.putString("sourceUri", map != null ? map.getString("uri") : 0);
                }
                if (map != null) {
                    createMap.merge(pl.c.b((pl.c) this.f2189v, map, (ReactContext) obj4, (File) obj2));
                    return createMap;
                }
                throw new IllegalArgumentException("keepLocalCopy: The file argument is null at index " + i11);
            default:
                RNDocumentPickerModule rNDocumentPickerModule = (RNDocumentPickerModule) this.f2188i;
                ko.a aVar5 = ko.a.f13464d;
                int i12 = this.f2187e;
                if (i12 == 0) {
                    ki.b.R(obj);
                    cVar = rNDocumentPickerModule.fileOps;
                    reactApplicationContext = rNDocumentPickerModule.getReactApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "access$getReactApplicationContext(...)");
                    ReadableArray readableArray2 = (ReadableArray) this.f2189v;
                    String path = (String) obj4;
                    pl.a.f16424e.getClass();
                    Intrinsics.checkNotNullParameter(path, "path");
                    Iterator it = pl.a.f16428x.iterator();
                    while (true) {
                        if (it.hasNext()) {
                            Object next = it.next();
                            if (Intrinsics.areEqual(((pl.a) next).f16429d, path)) {
                                obj3 = next;
                            }
                        }
                    }
                    pl.a aVar6 = (pl.a) obj3;
                    if (aVar6 == null) {
                        aVar6 = pl.a.f16425i;
                    }
                    this.f2187e = 1;
                    cVar.getClass();
                    ur.e eVar3 = nr.g0.a;
                    obj = nr.x.A(ur.d.f19093i, new e2.d(cVar, reactApplicationContext, aVar6, readableArray2, null), this);
                    if (obj == aVar5) {
                        return aVar5;
                    }
                } else {
                    if (i12 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                ((Promise) obj2).resolve((ReadableArray) obj);
                return Unit.a;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ g0(Object obj, Object obj2, Object obj3, Object obj4, Continuation continuation, int i5) {
        super(2, continuation);
        this.f2186d = i5;
        this.f2188i = obj;
        this.f2189v = obj2;
        this.f2190w = obj3;
        this.f2191x = obj4;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g0(wr.b bVar, Function2 function2, Continuation continuation) {
        super(2, continuation);
        this.f2186d = 0;
        this.f2191x = bVar;
        this.f2190w = function2;
    }
}
