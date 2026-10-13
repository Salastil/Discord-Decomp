package com.discord.chat.presentation.message;

import android.view.MenuItem;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.bridge.contentnode.HeadingContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.messagepart.AudioAttachmentMessageAccessory;
import com.discord.chat.presentation.message.view.botuikit.components.TextDisplayComponentView;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.message.viewholder.MessageComponentsViewHolder;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.emoji_picker.EmojiPickerScroller;
import com.discord.fastest_list.android.FastestListSections;
import com.discord.fastest_list.android.FastestListView;
import com.discord.permissions.NativePermissionManagerModule;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class i implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3927d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3928e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3929i;

    public /* synthetic */ i(int i5, Object obj, Object obj2) {
        this.f3927d = i5;
        this.f3928e = obj;
        this.f3929i = obj2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit onBindViewHolder$lambda$39$lambda$38;
        Unit bind$lambda$0;
        Unit spannable$lambda$72$lambda$54$lambda$53;
        Unit scrollListenerVelocityTracker$lambda$0;
        Unit typedAdapter$lambda$1;
        Unit requestMultiplePermissionsWithDeduplication$lambda$6;
        Unit createTextDisplayComponentContext$lambda$7;
        switch (this.f3927d) {
            case 0:
                onBindViewHolder$lambda$39$lambda$38 = MessageAccessoriesAdapter.onBindViewHolder$lambda$39$lambda$38((h) this.f3928e, (AudioAttachmentMessageAccessory) this.f3929i, (String) obj, (Integer) obj2);
                return onBindViewHolder$lambda$39$lambda$38;
            case 1:
                bind$lambda$0 = MessageComponentsViewHolder.bind$lambda$0((ChatEventHandler) this.f3928e, (String) this.f3929i, (String) obj, (String) obj2);
                return bind$lambda$0;
            case 2:
                spannable$lambda$72$lambda$54$lambda$53 = TextUtilsKt.toSpannable$lambda$72$lambda$54$lambda$53((HeadingContentNode) this.f3928e, (DraweeSpanStringBuilder) this.f3929i, (DraweeSpanStringBuilder) obj, (RenderContext) obj2);
                return spannable$lambda$72$lambda$54$lambda$53;
            case 3:
                scrollListenerVelocityTracker$lambda$0 = EmojiPickerScroller.scrollListenerVelocityTracker$lambda$0((EmojiPickerScroller) this.f3928e, (Function0) this.f3929i, (RecyclerView) obj, ((Float) obj2).floatValue());
                return scrollListenerVelocityTracker$lambda$0;
            case 4:
                typedAdapter$lambda$1 = FastestListView.typedAdapter$lambda$1((Function3) this.f3928e, (FastestListView) this.f3929i, (FastestListSections.Entry) obj, ((Integer) obj2).intValue());
                return typedAdapter$lambda$1;
            case 5:
                requestMultiplePermissionsWithDeduplication$lambda$6 = NativePermissionManagerModule.requestMultiplePermissionsWithDeduplication$lambda$6((NativePermissionManagerModule) this.f3928e, (List) this.f3929i, (String) obj, (Promise) obj2);
                return requestMultiplePermissionsWithDeduplication$lambda$6;
            case 6:
                createTextDisplayComponentContext$lambda$7 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$7((TextDisplayComponentViewManager) this.f3928e, (TextDisplayComponentView) this.f3929i, (String) obj, (String) obj2);
                return createTextDisplayComponentContext$lambda$7;
            default:
                ym.h hVar = (ym.h) this.f3928e;
                ym.c cVar = (ym.c) this.f3929i;
                String id2 = (String) obj;
                MenuItem menuItem = (MenuItem) obj2;
                Intrinsics.checkNotNullParameter(id2, "id");
                Intrinsics.checkNotNullParameter(menuItem, "menuItem");
                if (menuItem.isCheckable()) {
                    String t5 = hVar.t(cVar.getToolbar(), id2, null);
                    if (t5 != null) {
                        hVar.u(cVar.getToolbar(), t5);
                    }
                } else {
                    zm.h hVar2 = hVar.a0;
                    if (hVar2 != null) {
                        Intrinsics.checkNotNullParameter(id2, "id");
                        zm.d eventEmitter$react_native_screens_release = ((zm.c) hVar2).getEventEmitter$react_native_screens_release();
                        eventEmitter$react_native_screens_release.getClass();
                        Intrinsics.checkNotNullParameter(id2, "id");
                        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new cn.b(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), id2, eventEmitter$react_native_screens_release.a, 0));
                    }
                }
                return Unit.a;
        }
    }
}
