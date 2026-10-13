package com.discord;

import android.view.View;
import androidx.core.app.NotificationChannelCompat;
import androidx.core.view.WindowInsetsCompat;
import com.discord.chat.presentation.message.MessageView;
import com.discord.chat.presentation.message.messagepart.MessageAccessory;
import com.discord.chat.presentation.message.view.ActivityRichPresenceInviteEmbedView;
import com.discord.chat.presentation.message.view.FlaggedMessageEmbedView;
import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.notifications.renderer.NotificationChannels;
import com.discord.react_gesture_handler.DiscordGestureHandlerEnabledRootView;
import com.facebook.react.bridge.DynamicFromMap;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.devsupport.LogBoxDialog;
import com.facebook.react.uimanager.ViewGroupDrawingOrderHelper;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Map;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.d;
import kotlin.coroutines.g;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import nr.n1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3817d;

    public /* synthetic */ c(int i5) {
        this.f3817d = i5;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit performInitialization$lambda$10$lambda$9;
        int generateMessageAccessories$lambda$42;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$10;
        Unit configureMessageContent$lambda$18$lambda$8;
        Unit spannable$lambda$5;
        Unit migrateOrCreateNotificationChannel$lambda$13;
        ReadableMap asMap$lambda$6;
        int asInt$lambda$3;
        boolean asBoolean$lambda$1;
        String asString$lambda$4;
        ReadableType _get_type_$lambda$7;
        ReadableArray asArray$lambda$5;
        boolean _get_isNull_$lambda$0;
        double asDouble$lambda$2;
        WindowInsetsCompat onCreate$lambda$3$lambda$1;
        int childDrawingOrder$lambda$0;
        Unit GENERAL_HANDLERS$lambda$0;
        Unit MARKDOWN_HANDLERS$lambda$7;
        Unit MEDIA_HANDLERS$lambda$17;
        kotlin.coroutines.c cVar;
        Unit initNestedScrollOnTouchListeners$lambda$0;
        Unit initNestedScrollOnTouchListeners$lambda$1;
        switch (this.f3817d) {
            case 0:
                performInitialization$lambda$10$lambda$9 = MainApplication.performInitialization$lambda$10$lambda$9((String) obj, (Map) obj2);
                return performInitialization$lambda$10$lambda$9;
            case 1:
                generateMessageAccessories$lambda$42 = MessageView.generateMessageAccessories$lambda$42((MessageAccessory) obj, (MessageAccessory) obj2);
                return Integer.valueOf(generateMessageAccessories$lambda$42);
            case 2:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$10 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$10((String) obj, (String) obj2);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$10;
            case 3:
                configureMessageContent$lambda$18$lambda$8 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$8((String) obj, (String) obj2);
                return configureMessageContent$lambda$18$lambda$8;
            case 4:
                spannable$lambda$5 = TextUtilsKt.toSpannable$lambda$5((String) obj, (String) obj2);
                return spannable$lambda$5;
            case 5:
                migrateOrCreateNotificationChannel$lambda$13 = NotificationChannels.migrateOrCreateNotificationChannel$lambda$13((NotificationChannelCompat) obj, (NotificationChannelCompat.Builder) obj2);
                return migrateOrCreateNotificationChannel$lambda$13;
            case 6:
                asMap$lambda$6 = DynamicFromMap.asMap$lambda$6((ReadableMap) obj, (String) obj2);
                return asMap$lambda$6;
            case 7:
                asInt$lambda$3 = DynamicFromMap.asInt$lambda$3((ReadableMap) obj, (String) obj2);
                return Integer.valueOf(asInt$lambda$3);
            case 8:
                asBoolean$lambda$1 = DynamicFromMap.asBoolean$lambda$1((ReadableMap) obj, (String) obj2);
                return Boolean.valueOf(asBoolean$lambda$1);
            case 9:
                asString$lambda$4 = DynamicFromMap.asString$lambda$4((ReadableMap) obj, (String) obj2);
                return asString$lambda$4;
            case 10:
                _get_type_$lambda$7 = DynamicFromMap._get_type_$lambda$7((ReadableMap) obj, (String) obj2);
                return _get_type_$lambda$7;
            case 11:
                asArray$lambda$5 = DynamicFromMap.asArray$lambda$5((ReadableMap) obj, (String) obj2);
                return asArray$lambda$5;
            case 12:
                _get_isNull_$lambda$0 = DynamicFromMap._get_isNull_$lambda$0((ReadableMap) obj, (String) obj2);
                return Boolean.valueOf(_get_isNull_$lambda$0);
            case 13:
                asDouble$lambda$2 = DynamicFromMap.asDouble$lambda$2((ReadableMap) obj, (String) obj2);
                return Double.valueOf(asDouble$lambda$2);
            case 14:
                onCreate$lambda$3$lambda$1 = LogBoxDialog.onCreate$lambda$3$lambda$1(647, (View) obj, (WindowInsetsCompat) obj2);
                return onCreate$lambda$3$lambda$1;
            case 15:
                childDrawingOrder$lambda$0 = ViewGroupDrawingOrderHelper.getChildDrawingOrder$lambda$0((View) obj, (View) obj2);
                return Integer.valueOf(childDrawingOrder$lambda$0);
            case 16:
                GENERAL_HANDLERS$lambda$0 = ComponentContextDefaults.GENERAL_HANDLERS$lambda$0((String) obj, (String) obj2);
                return GENERAL_HANDLERS$lambda$0;
            case 17:
                MARKDOWN_HANDLERS$lambda$7 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$7((String) obj, (String) obj2);
                return MARKDOWN_HANDLERS$lambda$7;
            case 18:
                MEDIA_HANDLERS$lambda$17 = ComponentContextDefaults.MEDIA_HANDLERS$lambda$17((String) obj, (Integer) obj2);
                return MEDIA_HANDLERS$lambda$17;
            case 19:
                String acc = (String) obj;
                CoroutineContext.Element element = (CoroutineContext.Element) obj2;
                Intrinsics.checkNotNullParameter(acc, "acc");
                Intrinsics.checkNotNullParameter(element, "element");
                if (acc.length() == 0) {
                    return element.toString();
                }
                return acc + ", " + element;
            case 20:
                CoroutineContext acc2 = (CoroutineContext) obj;
                CoroutineContext.Element element2 = (CoroutineContext.Element) obj2;
                Intrinsics.checkNotNullParameter(acc2, "acc");
                Intrinsics.checkNotNullParameter(element2, "element");
                CoroutineContext C = acc2.C(element2.getKey());
                g gVar = g.f13538d;
                if (C == gVar) {
                    return element2;
                }
                jo.a aVar = d.f13537h;
                d dVar = (d) C.o(aVar);
                if (dVar == null) {
                    cVar = new kotlin.coroutines.c(element2, C);
                } else {
                    CoroutineContext C2 = C.C(aVar);
                    if (C2 == gVar) {
                        return new kotlin.coroutines.c(dVar, element2);
                    }
                    cVar = new kotlin.coroutines.c(dVar, new kotlin.coroutines.c(element2, C2));
                }
                return cVar;
            case 21:
                return new Pair(obj, obj2);
            case 22:
                Boolean bool = (Boolean) obj;
                bool.booleanValue();
                return bool;
            case 23:
                return ((CoroutineContext) obj).r((CoroutineContext.Element) obj2);
            case 24:
                return ((CoroutineContext) obj).r((CoroutineContext.Element) obj2);
            case 25:
                initNestedScrollOnTouchListeners$lambda$0 = DiscordGestureHandlerEnabledRootView.Companion.initNestedScrollOnTouchListeners$lambda$0((View) obj, (Function1) obj2);
                return initNestedScrollOnTouchListeners$lambda$0;
            case 26:
                initNestedScrollOnTouchListeners$lambda$1 = DiscordGestureHandlerEnabledRootView.Companion.initNestedScrollOnTouchListeners$lambda$1((View) obj, (Function1) obj2);
                return initNestedScrollOnTouchListeners$lambda$1;
            case 27:
                return Long.valueOf(pl.c.a((InputStream) obj, (OutputStream) obj2));
            case 28:
                return Integer.valueOf(((Integer) obj).intValue() + 1);
            default:
                CoroutineContext.Element element3 = (CoroutineContext.Element) obj2;
                if (!(element3 instanceof n1)) {
                    return obj;
                }
                Integer num = obj instanceof Integer ? (Integer) obj : null;
                int intValue = num != null ? num.intValue() : 1;
                return intValue == 0 ? element3 : Integer.valueOf(intValue + 1);
        }
    }
}
