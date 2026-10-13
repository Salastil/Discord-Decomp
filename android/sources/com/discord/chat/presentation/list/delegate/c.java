package com.discord.chat.presentation.list.delegate;

import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import bs.e1;
import com.discord.chat.presentation.list.delegate.BaseChatListItemDelegate;
import com.discord.chat.presentation.list.item.MessageItem;
import com.discord.chat.presentation.message.MessageView;
import com.discord.foreground_service.ForegroundServiceManager;
import com.discord.foreground_service.service.ServiceNotificationConfiguration;
import com.discord.lifecycle.ForegroundServiceStartGuard;
import com.discord.react_gesture_handler.passthrough_touch.PassthroughTouchViewGroup;
import com.discord.react_gesture_handler.passthrough_touch.PassthroughTouchViewManager;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.fabric.mounting.MountItemDispatcher;
import com.facebook.react.uimanager.ThemedReactContext;
import java.util.List;
import java.util.concurrent.Executor;
import jc.b0;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Ref;
import n1.f;
import n1.h;
import n1.q;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3887d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3888e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3889i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3890v;

    public /* synthetic */ c(Object obj, Object obj2, Object obj3, int i5) {
        this.f3887d = i5;
        this.f3888e = obj;
        this.f3889i = obj2;
        this.f3890v = obj3;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        MessageView.ChainPart chainPart;
        Unit handleCreateOrUpdateService$lambda$6;
        Unit dispatchMountItems$lambda$7$lambda$6;
        Unit createViewInstance$lambda$1$lambda$0;
        Unit onClearCredential$lambda$3$0;
        Unit runFallbackClearCredFlow$lambda$2$0$0;
        switch (this.f3887d) {
            case 0:
                chainPart = ((RegularMessageDelegate) this.f3888e).getChainPart((MessageItem) this.f3889i, (BaseChatListItemDelegate.Metadata) this.f3890v);
                break;
            case 1:
                handleCreateOrUpdateService$lambda$6 = ForegroundServiceManager.handleCreateOrUpdateService$lambda$6((ServiceNotificationConfiguration.Type) this.f3888e, (ForegroundServiceStartGuard.Result) this.f3889i, (ReactApplicationContext) this.f3890v);
                break;
            case 2:
                dispatchMountItems$lambda$7$lambda$6 = MountItemDispatcher.dispatchMountItems$lambda$7$lambda$6((List) this.f3888e, (e1) this.f3889i, (MountItemDispatcher) this.f3890v);
                break;
            case 3:
                createViewInstance$lambda$1$lambda$0 = PassthroughTouchViewManager.createViewInstance$lambda$1$lambda$0((PassthroughTouchViewManager) this.f3888e, (ThemedReactContext) this.f3889i, (PassthroughTouchViewGroup) this.f3890v);
                break;
            case 4:
                onClearCredential$lambda$3$0 = CredentialProviderPlayServicesImpl.onClearCredential$lambda$3$0((Executor) this.f3888e, (h) this.f3889i, (Ref.ObjectRef) this.f3890v);
                break;
            case 5:
                runFallbackClearCredFlow$lambda$2$0$0 = CredentialProviderPlayServicesImpl.runFallbackClearCredFlow$lambda$2$0$0((Exception) this.f3888e, (Executor) this.f3889i, (h) this.f3890v);
                break;
            case 6:
                ((Executor) this.f3888e).execute(new b0(17, (h) this.f3889i, this.f3890v));
                break;
            case 7:
                ((Executor) this.f3888e).execute(new b0(18, (h) this.f3889i, (q) this.f3890v));
                break;
            default:
                ((Executor) this.f3888e).execute(new b0(27, (h) this.f3889i, (f) this.f3890v));
                break;
        }
        return Unit.a;
    }
}
