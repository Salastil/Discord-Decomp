package e6;

import android.view.View;
import com.discord.chat.bridge.attachment.Attachment;
import com.discord.chat.bridge.botuikit.MediaGalleryDisplayComponent;
import com.discord.chat.bridge.botuikit.MediaGalleryItem;
import com.discord.chat.bridge.spoiler.SpoilerableData;
import com.discord.chat.presentation.message.view.botuikit.components.media_gallery.MediaGalleryDisplayComponentAdapter;
import com.discord.chat.presentation.message.view.polls.PollMediaView;
import kotlin.jvm.functions.Function6;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8052d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f8053e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f8054i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ SpoilerableData f8055v;

    public /* synthetic */ a(Object obj, Object obj2, SpoilerableData spoilerableData, int i5) {
        this.f8052d = i5;
        this.f8053e = obj;
        this.f8054i = obj2;
        this.f8055v = spoilerableData;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean onBindViewHolder$lambda$1;
        boolean onBindViewHolder$lambda$6;
        boolean media$lambda$6;
        switch (this.f8052d) {
            case 0:
                onBindViewHolder$lambda$1 = MediaGalleryDisplayComponentAdapter.onBindViewHolder$lambda$1((MediaGalleryDisplayComponentAdapter) this.f8053e, (MediaGalleryDisplayComponent) this.f8054i, (MediaGalleryItem) this.f8055v, view);
                return onBindViewHolder$lambda$1;
            case 1:
                onBindViewHolder$lambda$6 = MediaGalleryDisplayComponentAdapter.onBindViewHolder$lambda$6((MediaGalleryDisplayComponentAdapter) this.f8053e, (MediaGalleryDisplayComponent) this.f8054i, (MediaGalleryItem) this.f8055v, view);
                return onBindViewHolder$lambda$6;
            default:
                media$lambda$6 = PollMediaView.setMedia$lambda$6((PollMediaView) this.f8053e, (Function6) this.f8054i, (Attachment) this.f8055v, view);
                return media$lambda$6;
        }
    }
}
