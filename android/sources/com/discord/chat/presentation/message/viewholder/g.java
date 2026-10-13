package com.discord.chat.presentation.message.viewholder;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.fastest_list.android.FastestListView;
import com.discord.primitives.UserId;
import com.discord.user_search_worker.UserSearchWorkerManagerModule;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4096d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4097e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4098i;

    public /* synthetic */ g(int i5, Object obj, Object obj2) {
        this.f4096d = i5;
        this.f4097e = obj;
        this.f4098i = obj2;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        Unit bind$lambda$5;
        Unit onScrollListener$lambda$2;
        Unit worker$lambda$0;
        switch (this.f4096d) {
            case 0:
                bind$lambda$5 = MessageComponentsViewHolder.bind$lambda$5((ChatEventHandler) this.f4097e, (String) this.f4098i, (UserId) obj, (String) obj2, (String) obj3);
                return bind$lambda$5;
            case 1:
                onScrollListener$lambda$2 = FastestListView.onScrollListener$lambda$2((FastestListView) this.f4097e, (Function2) this.f4098i, (RecyclerView) obj, ((Integer) obj2).intValue(), ((Integer) obj3).intValue());
                return onScrollListener$lambda$2;
            default:
                worker$lambda$0 = UserSearchWorkerManagerModule.worker$lambda$0((UserSearchWorkerManagerModule) this.f4097e, (ReactApplicationContext) this.f4098i, (List) obj, (String) obj2, (String) obj3);
                return worker$lambda$0;
        }
    }
}
