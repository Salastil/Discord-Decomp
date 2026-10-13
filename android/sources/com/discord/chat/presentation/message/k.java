package com.discord.chat.presentation.message;

import com.discord.chat.bridge.botuikit.MediaGalleryDisplayComponent;
import com.discord.chat.bridge.botuikit.MediaGalleryItem;
import com.discord.chat.presentation.message.messagepart.MessageAccessory;
import com.discord.chat.presentation.message.view.botuikit.components.media_gallery.MediaGalleryDisplayComponentView;
import com.discord.chat.presentation.message.viewholder.MessagePartViewHolder;
import com.discord.fastest_list.android.FastestListSections;
import com.discord.fastest_list.android.FastestListView;
import com.discord.fastest_list.react.FastestListViewManager;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.react_strings.RenderContext;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class k implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3934d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3935e;

    public /* synthetic */ k(int i5, Object obj) {
        this.f3934d = i5;
        this.f3935e = obj;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        Unit onBindViewHolder$lambda$13;
        Unit _init_$lambda$0;
        CharSequence i18nFormat$lambda$5;
        Unit createViewInstance$lambda$4;
        switch (this.f3934d) {
            case 0:
                onBindViewHolder$lambda$13 = MessageAccessoriesAdapter.onBindViewHolder$lambda$13((MessageAccessoriesAdapter) this.f3935e, ((Integer) obj).intValue(), (MessageAccessory) obj2, (MessagePartViewHolder) obj3);
                break;
            case 1:
                _init_$lambda$0 = MediaGalleryDisplayComponentView._init_$lambda$0((MediaGalleryDisplayComponentView) this.f3935e, (MediaGalleryDisplayComponent) obj, (MediaGalleryItem) obj2, (MessagePartViewHolder) obj3);
                break;
            case 2:
                ((com.facebook.react.runtime.r) this.f3935e).invoke((Throwable) obj);
                break;
            case 3:
                i18nFormat$lambda$5 = I18nUtilsKt.i18nFormat$lambda$5((RenderContext) this.f3935e, (String) obj, (String) obj2, ((Boolean) obj3).booleanValue());
                break;
            case 4:
                createViewInstance$lambda$4 = FastestListViewManager.createViewInstance$lambda$4((FastestListViewManager) this.f3935e, (FastestListView) obj, (FastestListSections.Entry) obj2, ((Integer) obj3).intValue());
                break;
            case 5:
                wr.b bVar = (wr.b) this.f3935e;
                wr.b.f20044g.set(bVar, null);
                bVar.b(null);
                break;
            default:
                ((wr.f) this.f3935e).d();
                break;
        }
        return Unit.a;
    }

    public /* synthetic */ k(wr.b bVar, wr.a aVar) {
        this.f3934d = 5;
        this.f3935e = bVar;
    }
}
