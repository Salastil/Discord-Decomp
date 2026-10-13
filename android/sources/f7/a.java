package f7;

import com.discord.app_database.DatabaseVersions;
import com.discord.bundle_updater.react.events.OtaCheckAttemptEvent;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.MessageBase;
import com.discord.chat.bridge.activities.ActivityInstanceEmbed;
import com.discord.chat.bridge.activities.ActivityRichPresenceInviteEmbed;
import com.discord.chat.bridge.activities.EmbedDisplayType;
import com.discord.notifications.api.NotificationMessage;
import com.discord.notifications.react.events.LocalNotificationEvent;
import com.discord.push_notification_monitor.PushNotificationLog;
import com.discord.react.utilities.ReactViewExtensionsKt;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.react.bridge.ModuleSpec;
import com.swmansion.gesturehandler.react.RNGestureHandlerButtonViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerDetectorViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerRootViewManager;
import fo.u;
import java.lang.reflect.Method;
import java.util.regex.Pattern;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8380d;

    public /* synthetic */ a(int i5) {
        this.f8380d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_$1;
        KSerializer _childSerializers$_anonymous_$2;
        KSerializer _childSerializers$_anonymous_2;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_$02;
        KSerializer _childSerializers$_anonymous_4;
        KSerializer _childSerializers$_anonymous_$8;
        KSerializer _childSerializers$_anonymous_$9;
        KSerializer _childSerializers$_anonymous_5;
        KSerializer _childSerializers$_anonymous_$22;
        KSerializer _childSerializers$_anonymous_$3;
        KSerializer _childSerializers$_anonymous_$4;
        KSerializer _childSerializers$_anonymous_$5;
        KSerializer _childSerializers$_anonymous_$6;
        KSerializer _childSerializers$_anonymous_$7;
        KSerializer _init_$_anonymous_;
        KSerializer _childSerializers$_anonymous_6;
        KSerializer _childSerializers$_anonymous_7;
        KSerializer _childSerializers$_anonymous_8;
        KSerializer _childSerializers$_anonymous_$03;
        KSerializer _childSerializers$_anonymous_$12;
        KSerializer _childSerializers$_anonymous_$23;
        KSerializer _init_$_anonymous_2;
        Unit unit;
        Method viewOperationQueueMethod_delegate$lambda$1;
        switch (this.f8380d) {
            case 0:
                _childSerializers$_anonymous_ = NotificationMessage._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 1:
                _childSerializers$_anonymous_$0 = NotificationMessage._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 2:
                _childSerializers$_anonymous_$1 = NotificationMessage._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$1;
            case 3:
                _childSerializers$_anonymous_$2 = NotificationMessage._childSerializers$_anonymous_$2();
                return _childSerializers$_anonymous_$2;
            case 4:
                _childSerializers$_anonymous_2 = LocalNotificationEvent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 5:
                _childSerializers$_anonymous_3 = DatabaseVersions._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 6:
                _childSerializers$_anonymous_$02 = DatabaseVersions._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$02;
            case 7:
                u uVar = BytesRange.f4575c;
                return Pattern.compile("[-/ ]");
            case 8:
                ModuleSpec.Companion companion = ModuleSpec.INSTANCE;
                return v0.g(new Pair(RNGestureHandlerRootViewManager.REACT_CLASS, companion.viewManagerSpec(new i7.a(5))), new Pair(RNGestureHandlerButtonViewManager.REACT_CLASS, companion.viewManagerSpec(new i7.a(6))), new Pair(RNGestureHandlerDetectorViewManager.REACT_CLASS, companion.viewManagerSpec(new i7.a(7))));
            case 9:
                _childSerializers$_anonymous_4 = OtaCheckAttemptEvent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 10:
                try {
                    return Class.forName("com.facebook.react.uimanager.HasChildPressedStateDelay").getMethod("setHasChildPressedStateDelay", Boolean.class);
                } catch (ReflectiveOperationException unused) {
                    return null;
                }
            case 11:
                _childSerializers$_anonymous_$8 = Message._childSerializers$_anonymous_$8();
                return _childSerializers$_anonymous_$8;
            case 12:
                _childSerializers$_anonymous_$9 = Message._childSerializers$_anonymous_$9();
                return _childSerializers$_anonymous_$9;
            case 13:
                _childSerializers$_anonymous_5 = Message._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_5;
            case 14:
                _childSerializers$_anonymous_$22 = Message._childSerializers$_anonymous_$2();
                return _childSerializers$_anonymous_$22;
            case 15:
                _childSerializers$_anonymous_$3 = Message._childSerializers$_anonymous_$3();
                return _childSerializers$_anonymous_$3;
            case 16:
                _childSerializers$_anonymous_$4 = Message._childSerializers$_anonymous_$4();
                return _childSerializers$_anonymous_$4;
            case 17:
                _childSerializers$_anonymous_$5 = Message._childSerializers$_anonymous_$5();
                return _childSerializers$_anonymous_$5;
            case 18:
                _childSerializers$_anonymous_$6 = Message._childSerializers$_anonymous_$6();
                return _childSerializers$_anonymous_$6;
            case 19:
                _childSerializers$_anonymous_$7 = Message._childSerializers$_anonymous_$7();
                return _childSerializers$_anonymous_$7;
            case 20:
                _init_$_anonymous_ = MessageBase._init_$_anonymous_();
                return _init_$_anonymous_;
            case 21:
                _childSerializers$_anonymous_6 = PushNotificationLog._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_6;
            case 22:
                _childSerializers$_anonymous_7 = ActivityInstanceEmbed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_7;
            case 23:
                _childSerializers$_anonymous_8 = ActivityRichPresenceInviteEmbed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_8;
            case 24:
                _childSerializers$_anonymous_$03 = ActivityRichPresenceInviteEmbed._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$03;
            case 25:
                _childSerializers$_anonymous_$12 = ActivityRichPresenceInviteEmbed._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$12;
            case 26:
                _childSerializers$_anonymous_$23 = ActivityRichPresenceInviteEmbed._childSerializers$_anonymous_$2();
                return _childSerializers$_anonymous_$23;
            case 27:
                _init_$_anonymous_2 = EmbedDisplayType._init_$_anonymous_();
                return _init_$_anonymous_2;
            case 28:
                unit = Unit.a;
                return unit;
            default:
                viewOperationQueueMethod_delegate$lambda$1 = ReactViewExtensionsKt.viewOperationQueueMethod_delegate$lambda$1();
                return viewOperationQueueMethod_delegate$lambda$1;
        }
    }
}
