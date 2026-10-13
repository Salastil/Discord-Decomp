package kr;

import bs.h1;
import com.discord.chat.messagemanager.MessageViewManagers;
import com.discord.contact_sync.react.ContactSyncSerializerKt;
import com.discord.image.animated_image.animated_image_utils.AnimatedImageStateManager;
import com.discord.qr.scanner.QRScanner;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.react.utilities.PromiseWrapper;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nModule;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.react_strings.RenderContext;
import com.discord.reactions.ReactionView;
import com.discord.reactions.ShortcutsFlexbox;
import com.discord.serialization.SerializerUtils;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.json.JsonBuilder;

/* loaded from: classes3.dex */
public final /* synthetic */ class n implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13654d;

    public /* synthetic */ n(int i5) {
        this.f13654d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onCodeFound$lambda$1;
        Unit json$lambda$0;
        Object _init_$lambda$0;
        PromiseWrapper.Rejection _init_$lambda$1;
        Object serializeHasContactPermissionsResult$lambda$0;
        Object keysRequest$lambda$0;
        Unit i18nFormat$lambda$3;
        Unit i18nContentDescription$lambda$2;
        Unit i18nContentDescription$lambda$0;
        Unit i18nSetText$lambda$1;
        Unit configureLabels$lambda$0;
        Unit reactions$lambda$1;
        Unit updateWorker$lambda$5;
        Unit json$lambda$02;
        Unit findErroringFields$lambda$0;
        switch (this.f13654d) {
            case 0:
                Iterable it = (Iterable) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return it.iterator();
            case 1:
                return obj;
            case 2:
                return Boolean.valueOf(obj == null);
            case 3:
                onCodeFound$lambda$1 = QRScanner.onCodeFound$lambda$1((String) obj);
                return onCodeFound$lambda$1;
            case 4:
                json$lambda$0 = NativeMapExtensionsKt.json$lambda$0((JsonBuilder) obj);
                return json$lambda$0;
            case 5:
                _init_$lambda$0 = PromiseWrapper._init_$lambda$0(obj);
                return _init_$lambda$0;
            case 6:
                _init_$lambda$1 = PromiseWrapper._init_$lambda$1((PromiseWrapper.Rejection) obj);
                return _init_$lambda$1;
            case 7:
                return Float.valueOf(0.0f);
            case 8:
                CoroutineContext.Element element = (CoroutineContext.Element) obj;
                if (element instanceof CoroutineDispatcher) {
                    return (CoroutineDispatcher) element;
                }
                return null;
            case 9:
                CoroutineContext.Element element2 = (CoroutineContext.Element) obj;
                if (element2 instanceof kotlinx.coroutines.c) {
                    return (kotlinx.coroutines.c) element2;
                }
                return null;
            case 10:
                Throwable th2 = (Throwable) obj;
                String simpleName = th2.getClass().getSimpleName();
                String message = th2.getMessage();
                if (message == null) {
                    message = "no message";
                }
                return k0.d.l(simpleName, ": ", message);
            case 11:
                serializeHasContactPermissionsResult$lambda$0 = ContactSyncSerializerKt.serializeHasContactPermissionsResult$lambda$0(obj);
                return serializeHasContactPermissionsResult$lambda$0;
            case 12:
                keysRequest$lambda$0 = I18nModule.keysRequest$lambda$0((I18nMessage) obj);
                return keysRequest$lambda$0;
            case 13:
                i18nFormat$lambda$3 = I18nUtilsKt.i18nFormat$lambda$3((RenderContext) obj);
                return i18nFormat$lambda$3;
            case 14:
                i18nContentDescription$lambda$2 = I18nUtilsKt.i18nContentDescription$lambda$2((RenderContext) obj);
                return i18nContentDescription$lambda$2;
            case 15:
                i18nContentDescription$lambda$0 = I18nUtilsKt.i18nContentDescription$lambda$0((RenderContext) obj);
                return i18nContentDescription$lambda$0;
            case 16:
                i18nSetText$lambda$1 = I18nUtilsKt.i18nSetText$lambda$1((RenderContext) obj);
                return i18nSetText$lambda$1;
            case 17:
                t3.b it2 = (t3.b) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                return it2;
            case 18:
                configureLabels$lambda$0 = ReactionView.configureLabels$lambda$0((RenderContext) obj);
                return configureLabels$lambda$0;
            case 19:
                reactions$lambda$1 = ShortcutsFlexbox.setReactions$lambda$1((ReactionView.Reaction) obj);
                return reactions$lambda$1;
            case 20:
                updateWorker$lambda$5 = AnimatedImageStateManager.updateWorker$lambda$5((AnimatedImageStateManager) obj);
                return updateWorker$lambda$5;
            case 21:
                json$lambda$02 = MessageViewManagers.json$lambda$0((JsonBuilder) obj);
                return json$lambda$02;
            case 22:
                KClass it3 = (KClass) obj;
                Intrinsics.checkNotNullParameter(it3, "it");
                KSerializer D = zk.a.D(it3);
                if (D != null) {
                    return D;
                }
                if (h1.h(it3)) {
                    return new xr.c(it3);
                }
                return null;
            case 23:
                KClass it4 = (KClass) obj;
                Intrinsics.checkNotNullParameter(it4, "it");
                KSerializer D2 = zk.a.D(it4);
                if (D2 == null) {
                    D2 = h1.h(it4) ? new xr.c(it4) : null;
                }
                if (D2 != null) {
                    return nf.e.o(D2);
                }
                return null;
            case 24:
                synchronized (y.f.f20582b) {
                    y.f.f20587g.getClass();
                }
                return Unit.a;
            case 25:
                return Unit.a;
            case 26:
                findErroringFields$lambda$0 = SerializerUtils.findErroringFields$lambda$0((JsonBuilder) obj);
                return findErroringFields$lambda$0;
            default:
                Intrinsics.checkNotNullParameter((zr.a) obj, "<this>");
                return Unit.a;
        }
    }
}
