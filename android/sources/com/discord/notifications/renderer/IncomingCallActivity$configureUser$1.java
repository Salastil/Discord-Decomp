package com.discord.notifications.renderer;

import android.content.Context;
import android.graphics.Bitmap;
import android.widget.ImageView;
import android.widget.TextView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.primitives.GuildId;
import com.discord.primitives.UserId;
import com.discord.snowflake.SnowflakeUtils;
import com.discord.theme.ThemeManagerKt;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import lo.d;
import lo.h;
import nr.e;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.IncomingCallActivity$configureUser$1", f = "IncomingCallActivity.kt", l = {169}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nIncomingCallActivity.kt\nKotlin\n*S Kotlin\n*F\n+ 1 IncomingCallActivity.kt\ncom/discord/notifications/renderer/IncomingCallActivity$configureUser$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,311:1\n1#2:312\n*E\n"})
/* loaded from: classes.dex */
public final class IncomingCallActivity$configureUser$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ IncomingCallActivity this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.notifications.renderer.IncomingCallActivity$configureUser$1$1", f = "IncomingCallActivity.kt", l = {170}, m = "invokeSuspend")
    /* renamed from: com.discord.notifications.renderer.IncomingCallActivity$configureUser$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ GuildId $guildId;
        final /* synthetic */ String $userAvatar;
        final /* synthetic */ int $userDiscriminator;
        final /* synthetic */ String $userGuildAvatar;
        final /* synthetic */ UserId $userId;
        int label;
        final /* synthetic */ IncomingCallActivity this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(IncomingCallActivity incomingCallActivity, String str, GuildId guildId, UserId userId, String str2, int i5, Continuation continuation) {
            super(2, continuation);
            this.this$0 = incomingCallActivity;
            this.$userGuildAvatar = str;
            this.$guildId = guildId;
            this.$userId = userId;
            this.$userAvatar = str2;
            this.$userDiscriminator = i5;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.this$0, this.$userGuildAvatar, this.$guildId, this.$userId, this.$userAvatar, this.$userDiscriminator, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            String m1146getIconUrlForAvatarr1nfqec;
            Object fetchImage;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            IncomingCallActivity incomingCallActivity = this.this$0;
            Context applicationContext = incomingCallActivity.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
            m1146getIconUrlForAvatarr1nfqec = incomingCallActivity.m1146getIconUrlForAvatarr1nfqec(applicationContext, this.$userGuildAvatar, this.$guildId, this.$userId, this.$userAvatar, this.$userDiscriminator);
            this.label = 1;
            fetchImage = incomingCallActivity.fetchImage(m1146getIconUrlForAvatarr1nfqec, this);
            return fetchImage == aVar ? aVar : fetchImage;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public IncomingCallActivity$configureUser$1(IncomingCallActivity incomingCallActivity, Continuation continuation) {
        super(2, continuation);
        this.this$0 = incomingCallActivity;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        IncomingCallActivity$configureUser$1 incomingCallActivity$configureUser$1 = new IncomingCallActivity$configureUser$1(this.this$0, continuation);
        incomingCallActivity$configureUser$1.L$0 = obj;
        return incomingCallActivity$configureUser$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Long snowflake;
        Long snowflake2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
            String stringExtra = this.this$0.getIntent().getStringExtra(NotificationRenderer.USERNAME);
            String stringExtra2 = this.this$0.getIntent().getStringExtra("userId");
            UserId m1241boximpl = (stringExtra2 == null || (snowflake2 = SnowflakeUtils.INSTANCE.toSnowflake(stringExtra2)) == null) ? null : UserId.m1241boximpl(UserId.m1242constructorimpl(snowflake2.longValue()));
            String stringExtra3 = this.this$0.getIntent().getStringExtra("userAvatar");
            String stringExtra4 = this.this$0.getIntent().getStringExtra("userGuildAvatar");
            int intExtra = this.this$0.getIntent().getIntExtra("userDiscriminator", 0);
            String stringExtra5 = this.this$0.getIntent().getStringExtra("guildId");
            GuildId m1176boximpl = (stringExtra5 == null || (snowflake = SnowflakeUtils.INSTANCE.toSnowflake(stringExtra5)) == null) ? null : GuildId.m1176boximpl(GuildId.m1177constructorimpl(snowflake.longValue()));
            TextView textView = (TextView) this.this$0.findViewById(R.id.userName);
            textView.setText(stringExtra);
            Intrinsics.checkNotNull(textView);
            DiscordFontUtilsKt.setDiscordFont(textView, DiscordFont.PrimaryMedium);
            textView.setTextColor(ThemeManagerKt.getTheme().getWhite());
            Deferred[] deferredArr = {x.d(coroutineScope, null, new AnonymousClass1(this.this$0, stringExtra4, m1176boximpl, m1241boximpl, stringExtra3, intExtra, null), 3)};
            this.label = 1;
            obj = new e(deferredArr).a(this);
            if (obj == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        ((ImageView) this.this$0.findViewById(R.id.imageView)).setImageBitmap((Bitmap) ((List) obj).get(0));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((IncomingCallActivity$configureUser$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
