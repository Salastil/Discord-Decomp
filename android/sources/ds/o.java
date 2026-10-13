package ds;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final /* synthetic */ class o extends FunctionReferenceImpl implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7739d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(int i5) {
        super(2, t1.d.a, t1.a.class, "getCredentialExceptionTypeToException", "getCredentialExceptionTypeToException$credentials_play_services_auth(Ljava/lang/String;Ljava/lang/String;)Landroidx/credentials/exceptions/GetCredentialException;", 0);
        this.f7739d = i5;
        switch (i5) {
            case 3:
                super(2, t1.d.a, t1.a.class, "createCredentialExceptionTypeToException", "createCredentialExceptionTypeToException$credentials_play_services_auth(Ljava/lang/String;Ljava/lang/String;)Landroidx/credentials/exceptions/CreateCredentialException;", 0);
                break;
            case 4:
                super(2, t1.d.a, t1.a.class, "createCredentialExceptionTypeToException", "createCredentialExceptionTypeToException$credentials_play_services_auth(Ljava/lang/String;Ljava/lang/String;)Landroidx/credentials/exceptions/CreateCredentialException;", 0);
                break;
            case 5:
                super(2, t1.d.a, t1.a.class, "getCredentialExceptionTypeToException", "getCredentialExceptionTypeToException$credentials_play_services_auth(Ljava/lang/String;Ljava/lang/String;)Landroidx/credentials/exceptions/GetCredentialException;", 0);
                break;
            case 6:
                super(2, t1.d.a, t1.a.class, "getCredentialExceptionTypeToException", "getCredentialExceptionTypeToException$credentials_play_services_auth(Ljava/lang/String;Ljava/lang/String;)Landroidx/credentials/exceptions/GetCredentialException;", 0);
                break;
            default:
                break;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        switch (this.f7739d) {
            case 0:
                SerialDescriptor p02 = (SerialDescriptor) obj;
                int intValue = ((Number) obj2).intValue();
                Intrinsics.checkNotNullParameter(p02, "p0");
                p pVar = (p) this.receiver;
                pVar.getClass();
                boolean z5 = !p02.j(intValue) && p02.i(intValue).d();
                pVar.f7740b = z5;
                return Boolean.valueOf(z5);
            case 1:
                int intValue2 = ((Number) obj).intValue();
                ReactContext p12 = (ReactContext) obj2;
                Intrinsics.checkNotNullParameter(p12, "p1");
                ((rb.c) this.receiver).getClass();
                if (p12.hasActiveReactInstance()) {
                    WritableMap createMap = Arguments.createMap();
                    Integer num = rb.e.f17186v;
                    if (num == null || intValue2 != num.intValue()) {
                        createMap.putInt("orientationDegrees", intValue2);
                        ((DeviceEventManagerModule.RCTDeviceEventEmitter) p12.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("orientationDegreesDidChange", createMap);
                        rb.e.f17186v = Integer.valueOf(intValue2);
                    }
                }
                return Unit.a;
            case 2:
                ((t1.a) this.receiver).getClass();
                return t1.a.b((String) obj, (String) obj2);
            case 3:
                ((t1.a) this.receiver).getClass();
                return t1.a.a((String) obj, (String) obj2);
            case 4:
                ((t1.a) this.receiver).getClass();
                return t1.a.a((String) obj, (String) obj2);
            case 5:
                ((t1.a) this.receiver).getClass();
                return t1.a.b((String) obj, (String) obj2);
            case 6:
                ((t1.a) this.receiver).getClass();
                return t1.a.b((String) obj, (String) obj2);
            case 7:
                yq.y p03 = (yq.y) obj;
                yq.y p13 = (yq.y) obj2;
                Intrinsics.checkNotNullParameter(p03, "p0");
                Intrinsics.checkNotNullParameter(p13, "p1");
                ((zq.u) this.receiver).getClass();
                zq.l.f21396b.getClass();
                zq.m mVar = zq.k.f21395b;
                return Boolean.valueOf(mVar.b(p03, p13) && !mVar.b(p13, p03));
            default:
                yq.y p04 = (yq.y) obj;
                yq.y p14 = (yq.y) obj2;
                Intrinsics.checkNotNullParameter(p04, "p0");
                Intrinsics.checkNotNullParameter(p14, "p1");
                return Boolean.valueOf(((zq.m) this.receiver).a(p04, p14));
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o(int i5, Object obj, Class cls, String str, String str2, int i6, int i10) {
        super(i5, obj, cls, str, str2, i6);
        this.f7739d = i10;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(Object obj) {
        super(2, obj, zq.m.class, "equalTypes", "equalTypes(Lorg/jetbrains/kotlin/types/KotlinType;Lorg/jetbrains/kotlin/types/KotlinType;)Z", 0);
        this.f7739d = 8;
    }
}
