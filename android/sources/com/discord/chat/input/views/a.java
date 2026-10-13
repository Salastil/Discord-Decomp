package com.discord.chat.input.views;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.view.View;
import com.discord.chat.bridge.botuikit.MediaGalleryDisplayComponent;
import com.discord.chat.bridge.botuikit.MediaGalleryItem;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.chat.presentation.message.h;
import com.discord.chat.presentation.message.messagepart.MessageAttachmentAccessory;
import com.discord.chat.presentation.message.view.botuikit.components.media_gallery.MediaGalleryDisplayComponentView;
import com.discord.chat.presentation.message.view.mosaic.AttachmentMediaMosaicContainerView;
import com.discord.chat.presentation.message.viewholder.MessagePartViewHolder;
import com.discord.chatreplay.ReplayProviderActivity;
import com.discord.emoji_picker.EmojiPickerView;
import com.discord.media.MediaManagerModule;
import com.discord.permissions.NativePermissionManagerModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.defaults.DefaultReactNativeHost;
import com.facebook.react.runtime.ReactSurfaceImpl;
import com.facebook.react.runtime.ReactSurfaceView;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.f;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import nr.e1;
import nr.m;
import nr.t;
import rr.v;
import wm.o;
import wm.q;
import wm.r;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3868d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3869e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f3868d = i5;
        this.f3869e = obj;
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x00a9, code lost:
    
        if (r0 == null) goto L23;
     */
    @Override // kotlin.jvm.functions.Function2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj, Object obj2) {
        Unit _init_$lambda$2;
        Unit onBindViewHolder$lambda$31;
        Unit onBindViewHolder$lambda$34$lambda$33;
        Unit _init_$lambda$7;
        Unit mediaResolver$lambda$0;
        Unit requestPermissionWithDeduplication$lambda$5;
        ReactSurfaceView reactHost$lambda$1;
        Unit _init_$lambda$1;
        Unit attachmentAdapter$lambda$0;
        Unit requestReplayList$lambda$0;
        switch (this.f3868d) {
            case 0:
                _init_$lambda$2 = ChatInputRootView._init_$lambda$2((ChatInputRootView) this.f3869e, ((Integer) obj).intValue(), ((Integer) obj2).intValue());
                return _init_$lambda$2;
            case 1:
                onBindViewHolder$lambda$31 = MessageAccessoriesAdapter.onBindViewHolder$lambda$31((MessageAccessoriesAdapter) this.f3869e, (String) obj, (String) obj2);
                return onBindViewHolder$lambda$31;
            case 2:
                onBindViewHolder$lambda$34$lambda$33 = MessageAccessoriesAdapter.onBindViewHolder$lambda$34$lambda$33((h) this.f3869e, (String) obj, (Integer) obj2);
                return onBindViewHolder$lambda$34$lambda$33;
            case 3:
                _init_$lambda$7 = EmojiPickerView._init_$lambda$7((EmojiPickerView) this.f3869e, (Integer) obj, (Integer) obj2);
                return _init_$lambda$7;
            case 4:
                mediaResolver$lambda$0 = MediaManagerModule.mediaResolver$lambda$0((MediaManagerModule) this.f3869e, (Uri) obj, ((Integer) obj2).intValue());
                return mediaResolver$lambda$0;
            case 5:
                requestPermissionWithDeduplication$lambda$5 = NativePermissionManagerModule.requestPermissionWithDeduplication$lambda$5((NativePermissionManagerModule) this.f3869e, (String) obj, (Promise) obj2);
                return requestPermissionWithDeduplication$lambda$5;
            case 6:
                reactHost$lambda$1 = DefaultReactNativeHost.toReactHost$lambda$1((DefaultReactNativeHost) this.f3869e, (Context) obj, (ReactSurfaceImpl) obj2);
                return reactHost$lambda$1;
            case 7:
                _init_$lambda$1 = MediaGalleryDisplayComponentView._init_$lambda$1((MediaGalleryDisplayComponentView) this.f3869e, (MediaGalleryDisplayComponent) obj, (MediaGalleryItem) obj2);
                return _init_$lambda$1;
            case 8:
                attachmentAdapter$lambda$0 = AttachmentMediaMosaicContainerView.attachmentAdapter$lambda$0((AttachmentMediaMosaicContainerView) this.f3869e, (MessageAttachmentAccessory) obj, (MessagePartViewHolder) obj2);
                return attachmentAdapter$lambda$0;
            case 9:
                requestReplayList$lambda$0 = ReplayProviderActivity.Companion.requestReplayList$lambda$0((Activity) this.f3869e, (Unit) obj, (Throwable) obj2);
                return requestReplayList$lambda$0;
            case 10:
                v vVar = (v) this.f3869e;
                int intValue = ((Integer) obj).intValue();
                CoroutineContext.Element element = (CoroutineContext.Element) obj2;
                f key = element.getKey();
                CoroutineContext.Element o6 = vVar.f17622e.o(key);
                if (key != t.f15661e) {
                    if (element != o6) {
                        intValue = Integer.MIN_VALUE;
                    }
                    intValue++;
                } else {
                    Job job = (Job) o6;
                    Intrinsics.checkNotNull(element, "null cannot be cast to non-null type kotlinx.coroutines.Job");
                    Job job2 = (Job) element;
                    while (true) {
                        Job job3 = null;
                        if (job2 == null) {
                            job2 = null;
                        } else if (job2 != job && (job2 instanceof sr.t)) {
                            m mVar = (m) e1.f15615e.get((sr.t) job2);
                            if (mVar != null) {
                                job3 = mVar.getParent();
                            }
                            job2 = job3;
                        }
                    }
                    if (job2 != job) {
                        throw new IllegalStateException(("Flow invariant is violated:\n\t\tEmission from another coroutine is detected.\n\t\tChild of " + job2 + ", expected child of " + job + ".\n\t\tFlowCollector is not thread-safe and concurrent emissions are prohibited.\n\t\tTo mitigate this restriction please use 'channelFlow' builder instead of 'flow'").toString());
                    }
                }
                return Integer.valueOf(intValue);
            case 11:
                q qVar = (q) this.f3869e;
                Integer num = (Integer) obj;
                num.getClass();
                Integer num2 = (Integer) obj2;
                num2.getClass();
                qm.b.a(qVar.f19938e, qVar.getResources().getDisplayMetrics().density, num, num2, null, null, 24);
                r eventEmitter$react_native_screens_release = qVar.getEventEmitter$react_native_screens_release();
                ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, 3));
                return Unit.a;
            default:
                ym.h hVar = (ym.h) this.f3869e;
                Integer num3 = (Integer) obj;
                num3.intValue();
                Intrinsics.checkNotNullParameter((View) obj2, "<unused var>");
                en.f fVar = hVar.U;
                qm.b.a(fVar.E, fVar.getResources().getDisplayMetrics().density, null, null, null, num3, 14);
                return Unit.a;
        }
    }
}
