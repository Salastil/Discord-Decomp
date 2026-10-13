package com.discord.notifications.client;

import android.os.Handler;
import android.view.MotionEvent;
import androidx.core.util.Pools$SynchronizedPool;
import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.notifications.api.ConfiguredNotifChannel;
import com.discord.notifications.api.Embed;
import com.discord.notifications.api.KvMessageEntry;
import com.discord.notifications.api.NotificationData;
import com.discord.play_delivery.PlayAssetDelivery;
import com.discord.sticker.sticker_types.RLottieUtils;
import com.discord.user_search_worker.UserSearchQuerySetPayload;
import com.discord.user_search_worker.UserSearchUpdateUsersData;
import com.facebook.imageutils.BitmapUtil;
import com.facebook.react.DebugCorePackage;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.uimanager.JSPointerDispatcher;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.uimanager.events.KeyEvent;
import com.facebook.react.views.text.TextLayoutManager;
import cs.d;
import cs.m;
import cs.o;
import cs.r;
import cs.s;
import java.lang.reflect.Method;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4314d;

    public /* synthetic */ a(int i5) {
        this.f4314d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        boolean shouldDisplayNotification$lambda$0;
        Unit registerBackgroundStartListener$lambda$1;
        Unit unit;
        Unit unit2;
        Unit unit3;
        Unit init$lambda$0;
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_$1;
        KSerializer _childSerializers$_anonymous_2;
        Pools$SynchronizedPool DECODE_BUFFERS_delegate$lambda$0;
        Map viewManagersMap_delegate$lambda$1;
        Handler mainHandler_delegate$lambda$0;
        Map CODE_MAP_delegate$lambda$0;
        Map KEY_NAME_MAP_delegate$lambda$1;
        Method useBoundsForWidthMethod_delegate$lambda$0;
        Unit GENERAL_HANDLERS$lambda$1;
        Unit MARKDOWN_HANDLERS$lambda$11;
        Unit MEDIA_HANDLERS$lambda$18;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_4;
        KSerializer _childSerializers$_anonymous_5;
        KSerializer _childSerializers$_anonymous_$02;
        KSerializer _childSerializers$_anonymous_6;
        switch (this.f4314d) {
            case 0:
                shouldDisplayNotification$lambda$0 = NotificationClient.shouldDisplayNotification$lambda$0();
                return Boolean.valueOf(shouldDisplayNotification$lambda$0);
            case 1:
                registerBackgroundStartListener$lambda$1 = PlayAssetDelivery.registerBackgroundStartListener$lambda$1();
                return registerBackgroundStartListener$lambda$1;
            case 2:
                unit = Unit.a;
                return unit;
            case 3:
                unit2 = Unit.a;
                return unit2;
            case 4:
                unit3 = Unit.a;
                return unit3;
            case 5:
                init$lambda$0 = RLottieUtils.init$lambda$0();
                return init$lambda$0;
            case 6:
                _childSerializers$_anonymous_ = UserSearchQuerySetPayload._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 7:
                _childSerializers$_anonymous_$0 = UserSearchQuerySetPayload._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 8:
                _childSerializers$_anonymous_$1 = UserSearchQuerySetPayload._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$1;
            case 9:
                _childSerializers$_anonymous_2 = UserSearchUpdateUsersData._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 10:
                DECODE_BUFFERS_delegate$lambda$0 = BitmapUtil.DECODE_BUFFERS_delegate$lambda$0();
                return DECODE_BUFFERS_delegate$lambda$0;
            case 11:
                viewManagersMap_delegate$lambda$1 = DebugCorePackage.viewManagersMap_delegate$lambda$1();
                return viewManagersMap_delegate$lambda$1;
            case 12:
                mainHandler_delegate$lambda$0 = UiThreadUtil.mainHandler_delegate$lambda$0();
                return mainHandler_delegate$lambda$0;
            case 13:
                CODE_MAP_delegate$lambda$0 = KeyEvent.CODE_MAP_delegate$lambda$0();
                return CODE_MAP_delegate$lambda$0;
            case 14:
                KEY_NAME_MAP_delegate$lambda$1 = KeyEvent.KEY_NAME_MAP_delegate$lambda$1();
                return KEY_NAME_MAP_delegate$lambda$1;
            case 15:
                useBoundsForWidthMethod_delegate$lambda$0 = TextLayoutManager.setUseBoundsForWidthMethod_delegate$lambda$0();
                return useBoundsForWidthMethod_delegate$lambda$0;
            case 16:
                return s.f7338b;
            case 17:
                return o.f7333b;
            case 18:
                return m.f7332b;
            case 19:
                return r.f7337b;
            case 20:
                return d.f7328b;
            case 21:
                try {
                    try {
                        return JSPointerDispatcher.class.getMethod("handleMotionEvent", MotionEvent.class, EventDispatcher.class, Boolean.TYPE);
                    } catch (NoSuchMethodException unused) {
                        return null;
                    }
                } catch (NoSuchMethodException unused2) {
                    return JSPointerDispatcher.class.getMethod("handleMotionEvent", MotionEvent.class, EventDispatcher.class);
                }
            case 22:
                GENERAL_HANDLERS$lambda$1 = ComponentContextDefaults.GENERAL_HANDLERS$lambda$1();
                return GENERAL_HANDLERS$lambda$1;
            case 23:
                MARKDOWN_HANDLERS$lambda$11 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$11();
                return MARKDOWN_HANDLERS$lambda$11;
            case 24:
                MEDIA_HANDLERS$lambda$18 = ComponentContextDefaults.MEDIA_HANDLERS$lambda$18();
                return MEDIA_HANDLERS$lambda$18;
            case 25:
                _childSerializers$_anonymous_3 = ConfiguredNotifChannel._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 26:
                _childSerializers$_anonymous_4 = Embed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 27:
                _childSerializers$_anonymous_5 = KvMessageEntry._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_5;
            case 28:
                _childSerializers$_anonymous_$02 = KvMessageEntry._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$02;
            default:
                _childSerializers$_anonymous_6 = NotificationData._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_6;
        }
    }
}
