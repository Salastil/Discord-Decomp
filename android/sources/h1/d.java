package h1;

import android.content.ContentResolver;
import android.net.Uri;
import android.util.Log;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableArray;
import com.reactnativedocumentpicker.RNDocumentPickerModule;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.x;
import pl.e;

/* loaded from: classes.dex */
public final class d extends h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9478d = 0;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f9479e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f9480i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f9481v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(PlayServicesDevicePerformance playServicesDevicePerformance, Integer num, Continuation continuation) {
        super(2, continuation);
        this.f9480i = playServicesDevicePerformance;
        this.f9481v = num;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f9478d) {
            case 0:
                d dVar = new d((PlayServicesDevicePerformance) this.f9480i, (Integer) this.f9481v, continuation);
                dVar.f9479e = obj;
                return dVar;
            default:
                return new d((ReadableMap) this.f9479e, (RNDocumentPickerModule) this.f9480i, (Promise) this.f9481v, continuation);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f9478d) {
        }
        return ((d) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        pl.c cVar;
        Uri uri;
        ReactApplicationContext reactApplicationContext;
        e eVar;
        ReactApplicationContext reactApplicationContext2;
        int i5 = this.f9478d;
        Object obj2 = this.f9480i;
        Object obj3 = this.f9481v;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.f9479e;
                PlayServicesDevicePerformance playServicesDevicePerformance = (PlayServicesDevicePerformance) obj2;
                String str = playServicesDevicePerformance.f1524b;
                StringBuilder sb2 = new StringBuilder("Got mediaPerformanceClass ");
                Integer result = (Integer) obj3;
                sb2.append(result);
                Log.v(str, sb2.toString());
                Intrinsics.checkNotNullExpressionValue(result, "result");
                x.t(coroutineScope, null, new c(playServicesDevicePerformance, Math.max(result.intValue(), playServicesDevicePerformance.f1525c.a), null), 3);
                break;
            default:
                Promise promise = (Promise) obj3;
                ReadableMap readableMap = (ReadableMap) this.f9479e;
                RNDocumentPickerModule rNDocumentPickerModule = (RNDocumentPickerModule) obj2;
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                try {
                    String string = readableMap.hasKey("uri") ? readableMap.getString("uri") : null;
                    cVar = rNDocumentPickerModule.fileOps;
                    uri = rNDocumentPickerModule.currentUriOfFileBeingExported;
                    reactApplicationContext = rNDocumentPickerModule.getReactApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "access$getReactApplicationContext(...)");
                    pl.b c6 = cVar.c(uri, string, reactApplicationContext);
                    eVar = rNDocumentPickerModule.metadataGetter;
                    reactApplicationContext2 = rNDocumentPickerModule.getReactApplicationContext();
                    ContentResolver contentResolver = reactApplicationContext2.getContentResolver();
                    Intrinsics.checkNotNullExpressionValue(contentResolver, "getContentResolver(...)");
                    eVar.getClass();
                    e.b(contentResolver, c6, false);
                    WritableArray createArray = Arguments.createArray();
                    createArray.pushMap(c6.a());
                    promise.resolve(createArray);
                } catch (Exception e9) {
                    promise.reject(e9);
                }
                break;
        }
        return Unit.a;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(ReadableMap readableMap, RNDocumentPickerModule rNDocumentPickerModule, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.f9479e = readableMap;
        this.f9480i = rNDocumentPickerModule;
        this.f9481v = promise;
    }
}
